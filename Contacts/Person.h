/* Evgenii Meshcheriakov. Project 7 */


#ifndef CONTACTS_PERSON_H
#define CONTACTS_PERSON_H

#include <cstring>
#include <iomanip>
#include <vector>
#include <sstream>
#include <fstream>
#include "Center.h"

constexpr int WIDTH = 20;

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
    void setRelative(Person &person);
    std::string getName() const;
    std::string getEmail() const;
    std::string getPhone() const;
    std::string getCity() const;
    std::string getRelated() const;
private:
    std::string name;
    std::string email;
    std::string phone;
    std::string city;
    Person *relative;
};


#endif //CONTACTS_PERSON_H
