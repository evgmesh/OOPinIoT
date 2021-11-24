//
// Created by Evgenii Meshcheriakov on 11/24/21.
//

#ifndef ASSIGNMENT08_PERSON_H
#define ASSIGNMENT08_PERSON_H

#include <iostream>
#include <string>


class Person {
public:
    Person(const char *name = "nobody");
    virtual ~Person() = default;
    virtual void identity() const;
    virtual void interrogatey();
private:
    std::string name;
};


#endif //ASSIGNMENT08_PERSON_H
