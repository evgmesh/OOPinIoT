/* Evgenii Meshcheriakov. Assignment 8 */

#ifndef ASSIGNMENT08_PERSON_H
#define ASSIGNMENT08_PERSON_H

#include <iostream>
#include <string>


class Person {
public:
    Person(const char *name_p = "nobody");
    virtual ~Person() = default;
    virtual void identity() const;
    virtual void interrogate();
private:
    std::string name;
};


#endif //ASSIGNMENT08_PERSON_H
