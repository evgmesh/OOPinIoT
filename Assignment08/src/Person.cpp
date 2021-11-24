/* Evgenii Meshcheriakov. Assignment 8 */

#include "../lib/Person.h"

Person::Person(const char *name) : name(name) {
}
void Person::identity() const {
    std::cout << name;
}
void Person::interrogate() {

}