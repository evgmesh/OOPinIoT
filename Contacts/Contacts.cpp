/* Evgenii Meshcheriakov. Project 7 */

#include "Contacts.h"

void menu();


std::istream &operator>>(std::istream &in, Person &person) {
    std::string input;
    std::cout << "Name: ";       std::getline(std::cin, input);
    person.setName(input);
    std::cout << "email: ";       in >> input;
    person.setEmail(input);
    std::cout << "Phone: ";       in >> input; in.clear(); in.ignore();
    person.setPhone(input);
    std::cout << "City: ";       std::getline(std::cin, input);
    person.setCity(input);
    return in;
}

void Contacts::addContact(){
    Person person;
    std::cin >> person;
    contacts.push_back(person);
    std::cout << person.getName() << " has been added to contact list\n";
}


int Contacts::getAction() const{
    menu();
    int choice(0);
    std::cin >> choice; std::cin.clear(); std::cin.ignore();
    if (!std::cin || !choice) {
        throw(std::runtime_error("Invalid input. Program finished."));
    }
    return choice;
}

void Contacts::start(){
    enum {INIT = 1, SAVE, READ, ADD, REMOVE, FIND, PRINT, EXIT};
    int choice(0);
    try {
        while (choice != EXIT) {
            choice = getAction();

            if(choice == INIT)
                std::cout << "Init"<< std::endl;

            if(choice == SAVE)
                Contacts::save();

            if(choice == READ)
                Contacts::read();

            if(choice == ADD)
                Contacts::addContact();

            if(choice == REMOVE)
                Contacts::remove();

            if(choice == FIND)
                Contacts::find();

            if(choice == PRINT)
                Contacts::printAll();

            if(choice == EXIT)
                std::cout << "Bye-bye!" << std::endl;
        }
    } catch (std::exception & exception) {
        std::cout << "\nError: " << exception.what() << std::endl;
    }
}

void Contacts::printAll() const {
    std::cout << std::endl;
    if(contacts.empty())
        throw(std::runtime_error("contact list is empty. "
                                 "Try to add at least one person.\nProgram finished."));

    for(auto &c : contacts)
        std::cout << c;
    std::cout << std::endl;
}

// Removes all contacts with given name. Think about giving options if more than one person is found
void Contacts::remove() {
    std::string name;
    bool removed = false;
    std::cout << "\nWARNING, this is permanent action. Removal can't undo\n"
                <<"Please enter name of person to be removed: ";
    std::cin >> name;
    for (auto it = contacts.begin(); it <= contacts.end(); ++it ) {
        if (it->getName() == name) {
            removed = true;
            contacts.erase(it);
            std::cout << name << " has been removed successfully!"  << std::endl;
        }
        else if (!removed && it == contacts.end())
            throw(std::runtime_error("can't find contact with given city, person doesn't exist in "
                                     "contact list or check your entry for typo.\nProgram finished."));
    }
}

void Contacts::save() {
    std::ofstream outputFile;
    outputFile.open("../Contacts.txt", std::ios_base::out | std::ios_base::trunc);
    if(outputFile.is_open()) {
        for(auto &c : contacts)
            outputFile << c;
/*        better way to write to a file - write, but task requires usage of overloaded operator
        outputFile.write((char *) &c, sizeof (c)); */
    } else
        throw(std::runtime_error("can't open a file, check file name.\nProgram finished."));
    outputFile.close();
}

void Contacts::read() {
    contacts.clear();
    std::ifstream inputFile;
    inputFile.open("../Contacts.txt", std::ios_base::in);
    Person p;
    if (inputFile.is_open()) {


/*        better way to read from a file - read an object written by write, but task requires usage of overloaded operator
        while (inputFile.read((char *) &p, sizeof (p)))
            contacts.push_back(p);
*/
    } else
        throw(std::runtime_error("can't open a file, check file name.\nProgram finished."));
    inputFile.close();
}

// I don't like for loop in here (extra bool variable). Need to change to better solution
void Contacts::find() const{
    std::string city{};
    bool found = false;
    std::cout << "Enter city: ";
    std::getline(std::cin, city);
    for (auto it = contacts.begin(); it <= contacts.end(); ++it ) {
        if (it->getCity() == city) {
            std::cout << *it;
            found = true;
        }
        else if (!found && it == contacts.end())
            throw(std::runtime_error("can't find contact with given city, person doesn't exist in "
                                     "contact list or check your entry for typo.\nProgram finished."));
    }

}


void menu() {
    std::cout << "******************MENU:******************\n"
              << "1. Initialize (clear all records)\n"
              << "2. Save contact information to a file\n"
              << "3. Read contact information from a file\n"
              << "4. Add new person to phone book\n"
              << "5. Remove a person from the phone book\n"
              << "6. Print a list of persons who live in the given city\n"
              << "7. Print all contact information, relatives are printed before other persons\n"
              << "8. EXIT PROGRAM\n"
              << "Please, choose an action providing corresponding number: ";
}




#if 0
// Alternate version of remove
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