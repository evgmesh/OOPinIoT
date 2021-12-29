//
// Created by Evgenii Meshcheriakov on 12/28/21.
//

#ifndef CONTACTS_CONTACTS_H
#define CONTACTS_CONTACTS_H

#include "Person.h"

class Contacts {
public:
    int getAction() const;
    void start();
private:
    std::vector<Person> contacts;
};


#endif //CONTACTS_CONTACTS_H
