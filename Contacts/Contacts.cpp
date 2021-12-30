//
// Created by Evgenii Meshcheriakov on 12/28/21.
//

#include "Contacts.h"

void menu();


std::istream &operator>>(std::istream &in, Person &person) {
    std::string input;
    std::cout << "Name: ";       in >> input;
    person.setName(input);
    std::cout << "email: ";       in >> input;
    person.setEmail(input);
    std::cout << "Phone: ";       in >> input;
    person.setPhone(input);
    std::cout << "City: ";       in >> input;
    person.setCity(input);
    return in;
}

void Contacts::addContact(){
    Person person;
    std::cin >> person;
    contacts.push_back(person);
}




int Contacts::getAction() const{
    menu();
    int choice(0);
    std::cin >> choice;
    if (!std::cin || !choice) {
        throw(std::runtime_error("Invalid input. Program finished."));
    }
    return choice;
}

void Contacts::start(){
    enum {INIT = 1, SAVE, READ, ADD, REMOVE, FIND, PRINT, EXIT};
    try {
        int choice(0);
        while (choice != EXIT) {
            choice = getAction();
            if(choice == INIT)
                std::cout << "Init"<< std::endl;
            if(choice == SAVE)
                Contacts::save();
            if(choice == READ)
                std::cout << "Read"<< std::endl;
            if(choice == ADD)
                Contacts::addContact();
            if(choice == REMOVE)
                Contacts::remove();
            if(choice == FIND)
                std::cout << "Find"<< std::endl;
            if(choice == PRINT)
                Contacts::printAll();
            if(choice == EXIT)
                std::cout << "Bye-bye!" << std::endl;
        }
    } catch (std::exception & exception) {
        std::cout << "\nError: " << exception.what() << std::endl;
    }
}

void Contacts::printAll() {
    std::cout << std::endl;
    if(contacts.empty())
        throw(std::runtime_error("contact list is empty. "
                                 "Try to add at least one person.\nProgram finished."));
    for(auto &c : contacts)
        std::cout << c;
    std::cout << std::endl;
}

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
    }
    else {
        contacts.erase(p);
        std::cout << name << " has been removed successfully!"  << std::endl;
    }
}

void Contacts::save() {
    std::ofstream write;
    write.open("../Contacts.txt", std::ios_base::out | std::ios_base::trunc);
    if(write.is_open()) {
        write << "Test text\n Next line\n";
        for(auto &c : contacts)
            write << c;
    }
    else
        throw(std::runtime_error("can't open a file, check file name.\nProgram finished."));
    write.close();
}

void Contacts::read() {
    std::ifstream read;
    read.open("../Contacts.txt", std::ios_base::in);
    if(read.is_open()) {

    }
    else
        throw(std::runtime_error("can't open a file, check file name.\nProgram finished."));
    read.close();
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
