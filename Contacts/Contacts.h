//
// Created by Evgenii Meshcheriakov on 12/28/21.
//

#ifndef CONTACTS_CONTACTS_H
#define CONTACTS_CONTACTS_H

#include "Person.h"
#include <fstream>

class Contacts {
    friend std::istream &operator>>(std::istream &in, Person &person);

public:
    int getAction() const;
    void start();
    void addContact();
    void printAll();
    void remove();
    void save();
    void read();
private:
    std::vector<Person> contacts;
};


#endif //CONTACTS_CONTACTS_H
