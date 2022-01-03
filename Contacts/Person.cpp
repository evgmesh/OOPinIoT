/* Evgenii Meshcheriakov. Project 7 */

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
    out << std::left << std::setw(WIDTH) << person.name << "|"
        << std::left << std::setw(WIDTH) << person.email << "|"
        << std::right << std::setw(WIDTH) << person.phone << "|"
        << std::left << std::setw(WIDTH) << person.city;
    person.relative ? std::cout << std::left << std::setw(WIDTH) << person.relative->name << std::endl
                    : std::cout << std::endl;
    return out;
}
//<< std::setiosflags(std::ios::left)

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

std::string Person::getName() const{
    return name;
}

std::string Person::getCity() const{
    return city;
}

