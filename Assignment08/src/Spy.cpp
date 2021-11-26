/* Evgenii Meshcheriakov. Assignment 8 */

#include "../lib/Spy.h"

Spy::Spy(const char *name0, const char *alias0, int resistance0) :
        Person(name0), alias(alias0), resistance(resistance0) {
};


void Spy::identity() const {
    if (resistance > 0) {
        std::cout << "My name is: " << alias << std::endl;

    } else {
        Person::identity();
        std::cout << "My alias is: " << alias << std::endl;
    }
}
void Spy::interrogate() {
    resistance--;
}

void Spy::set_identity(const char *alias0) {
    alias = alias0;
}
