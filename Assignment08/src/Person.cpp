/* Evgenii Meshcheriakov. Assignment 8 */

#include "../lib/Person.h"

Person::Person(const char *name0) : name(name0) {
}
void Person::identity() const {
    std::cout << "My name is: " << name << std::endl;
}
void Person::interrogate() {
}