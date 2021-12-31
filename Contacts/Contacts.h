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
    void start();
private:
    int getAction() const;
    void addContact();
    void printAll() const;
    void remove();
    void save();
    void read();
    std::vector<Person> contacts;
};


#endif //CONTACTS_CONTACTS_H
