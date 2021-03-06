/* Evgenii Meshcheriakov. Project 7 */

#include "Contacts.h"

void menu();

void file_remover();

bool valid_email(const std::string& email);

bool valid_phone(const std::string& number);

void Contacts::init() {
    std::string input;
    std::cout << "\nWARNING, this is permanent action. Removal can't undo\n"
              << "Please confirm if continue(y/n): ";
    std::cin >> input;
    if (input == "y") {
        contacts.clear();
        file_remover();
    } else
        std::cout << "\nCANCELED\n";
}

void Contacts::addContact() {

    Contacts::read();

    Person person;
    std::string input;

    std::cout << "Name (first (last)): ";
    std::getline(std::cin, input);
    person.setName(input);

    std::cout << "email (example@example.fi): ";
    std::getline(std::cin, input);
    while(!valid_email(input)) {
        input.erase();
        std::cout << "Invalid input. Check example. Try again: ";
        std::getline(std::cin, input);
    }
    person.setEmail(input);
    input.clear();

    std::cout << "Phone (0123456789): ";
    std::getline(std::cin, input);
    while(!valid_phone(input)) {
        input.erase();
        std::cout << "Invalid input. Check example. Try again: ";
        std::getline(std::cin, input);
    }
    person.setPhone(input);

    input.clear();
    std::cout << "City (Example (Example)): ";
    std::getline(std::cin, input);
    person.setCity(input);

    input.clear();
    std::cout << "Relative (first (last), press ENTER if no relatives): ";
    std::getline(std::cin, input);
    person.setRelative(input);

    contacts.push_back(person);
    Contacts::save();

    std::cout << std::endl << person.getName()
              << " has been added to contact list successfully!\n" << std::endl;
}


int Contacts::getAction() const {
    menu();
    int choice(0);
    std::cin >> choice;
    std::cin.clear();
    std::cin.ignore();
    if (!std::cin || !choice) {
        throw (std::runtime_error("invalid input. Program finished."));
    }
    return choice;
}

void Contacts::start() {
    enum {
        INIT = 1, SAVE, READ, ADD, REMOVE, FIND, PRINT, RELATE, EXIT
    };
    int choice(0);
    try {
        while (choice != EXIT) {
            choice = getAction();

            if (choice == INIT) {
                Contacts::init();
                choice = EXIT;
            }

            if (choice == SAVE)
                Contacts::save();

            if (choice == READ) {
                int counter = Contacts::read();
                if (counter == 0)
                    std::cout << "\nDatabase file is empty, read 0 "
                                 "contacts.\nProgram finished.\n";
                else
                    std::cout << "\nSuccessfully read " << counter
                              << " contact/s from the database\n";
                std::cout << std::endl;
                choice = EXIT;
            }

            if (choice == ADD)
                Contacts::addContact();

            if (choice == REMOVE)
                Contacts::remove();

            if (choice == FIND)
                Contacts::find();

            if (choice == PRINT) {
                Contacts::read();
                Contacts::printAll();
            }
            if (choice == RELATE) {
                Contacts::read();
                Contacts::addRelated();
            }

            if (choice == EXIT)
                std::cout << "\nBye-bye!" << std::endl;
        }
    } catch (std::exception &exception) {
        std::cout << "\nError: " << exception.what() << std::endl;
    }
}

void Contacts::printAll() const {
    std::cout << std::endl;
    if (contacts.empty())
        throw (std::runtime_error("contact list is empty. "
                                  "Try to add at least one person.\nProgram finished."));
    rowLabels();
    for (auto &c: contacts) {
        printer(c);
    }
    std::cout << std::endl;
}

// Removes all contacts with given name since task doesn't specify actions in case if more than one person is found
void Contacts::remove() {
    std::string name;
    bool removed = false;
    std::cout << "\nWARNING, this is permanent action. Removal can't undo\n"
              << "Please enter name of person to be removed: ";
    std::cin >> name;
    for (auto it = contacts.begin(); it <= contacts.end(); ++it) {
        if (it->getName() == name) {
            removed = true;
            contacts.erase(it);
            std::cout << "\n" << name << " has been removed successfully!";
        } else if (!removed && it == contacts.end())
            throw (std::runtime_error("can't find contact with given name, person doesn't exist in "
                                      "contact list or check your entry for typo.\nProgram finished."));
    }
    if (!contacts.empty())
        Contacts::save();
    else
        file_remover();
    std::cout << '\n' << std::endl;
}

void Contacts::save() {
    if (contacts.empty())
        throw (std::runtime_error("nothing to save, add at least one contact.\nProgram finished."));
    std::ofstream outputFile;
    outputFile.open(FILENAME, std::ios_base::out | std::ios_base::trunc);
    if (outputFile.is_open()) {
        for (auto &c: contacts)
            outputFile << c;
/*      better way to write to a file in my opinion - write(), but task requires usage of overloaded operator
        outputFile.write((char *) &c, sizeof (c)); */
    } else
        throw (std::runtime_error("can't open a file, check file name.\nProgram finished."));
    outputFile.close();
}


std::istream &operator>>(std::istream &in, Parts<DELIM> &out) {
    std::getline(in, out, DELIM);
    return in;
}

int Contacts::read() {
    std::string buf;
    int counter(0);
    contacts.clear();

    std::fstream inputFile;
    inputFile.open(FILENAME, std::ios_base::out | std::ios_base::app);
    inputFile.close();
    inputFile.open(FILENAME, std::ios_base::in);
    if (!inputFile.is_open())
        throw (std::runtime_error("can't open a file, check file name.\nProgram finished."));
    do {
        std::getline(inputFile, buf);
        if (!buf.empty()) {
            Person p;
            std::istringstream iss(buf);
            std::vector<std::string> results((std::istream_iterator<Parts<DELIM>>(iss)),
                                             std::istream_iterator<Parts<DELIM>>());
            p.setName(results[0]);
            p.setEmail(results[1]);
            p.setPhone(results[2]);
            p.setCity(results[3]);
            p.setRelative(results[4]);
            contacts.push_back(p);
            ++counter;
        }
    } while (!buf.empty());
/*      better way to read from a file in my opinion - read an object written by write,
 *      but task requires usage of overloaded operator
        while (inputFile.read((char *) &p, sizeof (p)))
            contacts.push_back(p); */
    inputFile.close();
    return counter;
}


void Contacts::find() const {
    std::string city{};
    bool found = false;
    std::cout << "Enter city: ";
    std::getline(std::cin, city);
    for (auto it = contacts.begin(); it <= contacts.end(); ++it) {
        if (it->getCity() == city) {
            if (!found) {
                std::cout << "\nFound following people:\n";
                rowLabels();
            }
            printer(*it);
            found = true;
        } else if (!found && it == contacts.end())
            throw (std::runtime_error("can't find contact with given city, person doesn't exist in "
                                      "contact list or check your entry for typo.\nProgram finished."));
    }
    std::cout << "\n";
}

void Contacts::rowLabels() const {
    std::cout << std::setw(WIDTH) << center<std::string>("Name") << "|"
              << std::setw(WIDTH) << center<std::string>("Email") << "|"
              << std::setw(WIDTH) << center<std::string>("Phone") << "|"
              << std::setw(WIDTH) << center<std::string>("City") << "|"
              << std::setw(WIDTH) << center<std::string>("Related") << std::endl
              << std::string(WIDTH * 5, '-') << std::endl;
}

void Contacts::printer(Person const &person) const {
    std::cout << std::left << std::setw(WIDTH) << person.getName() << "|"
              << std::left << std::setw(WIDTH) << person.getEmail() << "|"
              << std::right << std::setw(WIDTH) << person.getPhone() << "|"
              << std::left << std::setw(WIDTH) << person.getCity() << "|"
              << std::left << std::setw(WIDTH) << person.getRelated() << std::endl;
}

void Contacts::addRelated() {
    std::string contactName{}, relatedName{};
    int counter(0);
    std::cout << "Enter name of the contact in the list: ";
    std::getline(std::cin, contactName);
    for (auto it = contacts.begin(); it <= contacts.end(); ++it) {
        if (it->getName() == contactName) {
            ++counter;
            if (counter == 2)
                std::cout << "WARNING: found more then one contact with name "
                          << contactName << std::endl;
            std::cout << "Enter name of related person for " << contactName << ": ";
            std::getline(std::cin, relatedName);
            it->setRelative(relatedName);
        } else if (counter == 0 && it == contacts.end())
            throw (std::runtime_error("can't find contact with given contactName, person doesn't exist in "
                                      "contact list or check your entry for typo.\nProgram finished."));
    }
    Contacts::save();
    std::cout << "\nRelation has been created successfully\n" << std::endl;
};


void file_remover() {
    remove(FILENAME) ? throw (std::runtime_error("file doesn't exist. ""Database is already empty!"))
                     : std::cout << "\nAll records are cleared!" << std::endl;
}


void menu() {
    std::cout << "**************************MENU:*****************************\n"
                 "1. Initialize (clear all records)\n"
                 "2. Save contact information to a file\n"
                 "3. Read contact information from a file\n"
                 "4. Add new person to phone book\n"
                 "5. Remove a person from the phone book\n"
                 "6. Print a list of persons who live in the given city\n"
                 "7. Print all contact information\n"
                 "8. Add related person name to contact in the list\n"
                 "9. EXIT PROGRAM\n"
                 << std::string(60, '*') << std::endl
                 << "Please, choose an action providing corresponding number: ";
}

bool valid_email(const std::string& email) {
    const std::regex pattern ("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return std::regex_match(email, pattern);
}


bool valid_phone(const std::string& number)
{
    const std::regex pattern ("(^[0-9]*$)");
    return std::regex_match(number, pattern);
}


#if 0
// Alternate version of remove. Disadvantage - removes only first person in case of several with same name.
void Contacts::remove() {
    std::string name;
    std::cout << "\nWARNING, this is permanent action. Removal can't undo\n"
                <<"Please enter name of person to be removed: ";
    std::cin >> name;
    auto p = std::find_if(contacts.begin(), contacts.end(),
                          [&name](Person person)->bool {return name == person.getName();});
    if(p == contacts.end()) {
        throw(std::runtime_error("person can't be found. This person doesn't exist in contact list or"
                                 " check your entry for typo.\nProgram finished."));
    } else {
        contacts.erase(p);
        std::cout << name << " has been removed successfully!"  << std::endl;
    }
}
#endif
