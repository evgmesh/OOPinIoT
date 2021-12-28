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

void Person::Print() {
    std::cout << std::left << std::setw(15) << name << " | "
        << std::left << std::setw(15) << email << " | "
        << std::left << std::setw(15) << phone << " | "
        << std::left << std::setw(15) << city;
    relative ? std::cout << std::left << std::setw(15) << relative->name << std::endl : std::cout << std::endl;
}
