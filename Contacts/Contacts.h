/* Evgenii Meshcheriakov. Project 7 */

#ifndef CONTACTS_CONTACTS_H
#define CONTACTS_CONTACTS_H

#include "Person.h"

constexpr char FILENAME[] = "../Contacts.txt";

constexpr char DELIM = '|';
// template for reading csv with custom separator specified as DELIM
template<char>
class Parts : public std::string {};


class Contacts {
    friend std::istream &operator>>(std::istream &in, Parts<DELIM> &out);

public:
    void start();
private:
    int getAction() const;
    void printer(Person const &person) const;
    void init();
    void addContact();
    void printAll() const;
    void rowLabels () const;
    void remove();
    void save();
    int read();
    void find() const;
    void addRelated();
    std::vector<Person> contacts;
};


#endif //CONTACTS_CONTACTS_H

