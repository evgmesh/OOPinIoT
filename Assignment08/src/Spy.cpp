/* Evgenii Meshcheriakov. Assignment 8 */

#include "../lib/Spy.h"

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




