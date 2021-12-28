//
// Created by Evgenii Meshcheriakov on 12/27/21.
//

#ifndef CONTACTS_PERSON_H
#define CONTACTS_PERSON_H

#include <iostream>
#include <iomanip>

class Person {
public:
    Person(const char *name_ = "", const char *email_ = "", const char *phone_ = "", const char *city_ = "");
    Person(const char *name_, const char *email_, const char *phone_, const char *city_, Person &person_);
    ~Person();
    void Print();
private:
    std::string name;
    std::string email;
    std::string phone;
    std::string city;
    Person *relative;
};


#endif //CONTACTS_PERSON_H
