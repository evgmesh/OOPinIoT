//
// Created by Evgenii Meshcheriakov on 12/28/21.
//

#include "Contacts.h"


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

int Contacts::getAction() const{
    menu();
    int choice(0);
    std::cin >> choice;
    if (!std::cin || !choice) {
        throw(std::runtime_error("Invalid input. Program finished."));
    }
    return choice;
}

void Contacts::start() {
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
                std::cout << "Add"<< std::endl;
            if(choice == REMOVE)
                std::cout << "Remove"<< std::endl;
            if(choice == FIND)
                std::cout << "Find"<< std::endl;
            if(choice == PRINT)
                std::cout << "Print"<< std::endl;
            if(choice == EXIT)
                std::cout << "Bye-bye!" << std::endl;
        }
    } catch (std::exception & exception) {
        std::cout << "Error: " << exception.what() << std::endl;
    }
}
