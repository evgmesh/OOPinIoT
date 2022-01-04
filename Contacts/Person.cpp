/* Evgenii Meshcheriakov. Project 7 */

#include "Person.h"


Person::Person(const char *name_, const char *email_, const char *phone_, const char *city_) :
        name(name_), email(email_), phone(phone_), city(city_), relatives(0) {
}


std::ostream &operator<<(std::ostream &out, const Person &person) {
    out << person.name << "|"
        << person.email << "|"
        << person.phone << "|"
        << person.city << "|";
    for(auto i = person.relatives.begin(); i <= person.relatives.end(); ++i) {
        i == person.relatives.end() ? out << std::endl : out << *i << " ";
    }
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
void Person::setRelative(std::string &n) {
    relatives.push_back(n);
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

    std::string result{};
    for(auto &i : relatives)
        result += i + " ";
    return result;
}


