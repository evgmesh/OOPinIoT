/* Evgenii Meshcheriakov. Assignment 8 */

#ifndef ASSIGNMENT08_SPY_H
#define ASSIGNMENT08_SPY_H

#include "Person.h"

class Spy: public Person{
public:
    Spy(const char *name0 = "classified", const char *alias0 = "classified", const int resistance0 = 0) :
    Person(name0), alias(alias0), resistance(resistance0) {};
    void identity() const override;
    void interrogate() override;
    void set_identity(const char *alias0);

private:
    std::string alias;
    int resistance;
};


#endif //ASSIGNMENT08_SPY_H
