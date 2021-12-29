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
                std::cout << "Save"<< std::endl;
            if(choice == READ)
                std::cout << "Read"<< std::endl;
            if(choice == ADD)
                Contacts::addContact();
            if(choice == REMOVE)
                std::cout << "Remove"<< std::endl;
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
        throw(std::runtime_error("Contact list is empty. "
                                 "Try to add at least one person.\nProgram finished."));
    for(auto &c : contacts)
        std::cout << c;
    std::cout << std::endl;
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
