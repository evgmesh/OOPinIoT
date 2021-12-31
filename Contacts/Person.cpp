//
// Created by Evgenii Meshcheriakov on 12/27/21.
//

#include "Person.h"

Person::Person(const char *name_, const char *email_, const char *phone_, const char *city_) :
name(name_), email(email_), phone(phone_), city(city_) {
    relative = nullptr;
}

Person::Person(const char *name_, const char *email_, const char *phone_, const char *city_, Person &person_) :
        name(name_), email(email_), phone(phone_), city(city_) {
    relative = &person_;
    person_.relative = this;
}
Person::~Person() {
    if(relative) relative = nullptr;
}

std::ostream &operator<<(std::ostream &out, const Person &person) {
    out << std::left << std::setw(15) <<person.name << " | "
             << std::left << std::setw(15) << person.email << "|"
             << std::left << std::setw(15) << person.phone << "|"
             << std::left << std::setw(15) << person.city;
    person.relative ? std::cout << std::left << std::setw(15) << person.relative->name << std::endl
                    : std::cout << std::endl;
    return out;
}


void Person::setName(std::string &n) {
    name = n;
}

void Person::setEmail(std::string &n) {
    email = n;
}

void Person::setPhone(std::string &n) {
    phone = n;
}

void Person::setCity(std::string &n) {
    city = n;
}

std::string Person::getName() {
    return name;
}

std::string Person::getCity() {
    return city;
}

