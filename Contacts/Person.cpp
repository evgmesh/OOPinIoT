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
    out << person.name << "|"
        << person.email << "|"
        << person.phone << "|"
        << person.city << "|";
    person.relative ? out << person.relative->getName() << std::endl
                    : out << std::endl;
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
void Person::setRelative(Person &person) {
    relative = &person;
    person.relative = this;
}

std::string Person::getName() const{
    return name;
}

std::string Person::getCity() const{
    return city;
}

std::string Person::getEmail() const {
    return email;
}

std::string Person::getPhone() const {
    return phone;
}

std::string Person::getRelated() const {
    if (relative)
        return relative->getName();
    else
        return "";
}


