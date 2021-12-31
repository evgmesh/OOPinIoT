//
// Created by Evgenii Meshcheriakov on 12/27/21.
//

#ifndef CONTACTS_PERSON_H
#define CONTACTS_PERSON_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>

class Person {
    friend std::ostream &operator<<(std::ostream &out, const Person &person);
public:
    Person(const char *name_ = "", const char *email_ = "", const char *phone_ = "", const char *city_ = "");
    Person(const char *name_, const char *email_, const char *phone_, const char *city_, Person &person_);
    ~Person();
    void setName(std::string &n);
    void setEmail(std::string &n);
    void setPhone(std::string &n);
    void setCity(std::string &n);
    std::string getName();
    std::string getCity();
private:
    std::string name;
    std::string email;
    std::string phone;
    std::string city;
    Person *relative;
};


#endif //CONTACTS_PERSON_H
