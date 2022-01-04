/* Evgenii Meshcheriakov. Project 7 */

#ifndef CONTACTS_CONTACTS_H
#define CONTACTS_CONTACTS_H

#include "Person.h"

constexpr char DELIM = '|';

template<char DELIM>
class Parts : public std::string {};


class Contacts {
    friend std::istream &operator>>(std::istream &in, Parts<DELIM> &out);

public:
    void start();
private:
    int getAction() const;
    void addContact();
    void printAll() const;
    void remove();
    void save();
    void read();
    void find() const;
    std::vector<Person> contacts;
};


#endif //CONTACTS_CONTACTS_H
