#include <iostream>
#include "Person.h"
int main() {

    Person p1("Person 1");
    std::cout << "p1 before:" << std::endl;      p1.Print();

    Person p2("Person 2", "dfsd", "767854", "dfsd", p1);
    std::cout << "p2 before:" << std::endl;    p2.Print();

    std::cout << "p1 after:" << std::endl;     p1.Print();
    return 0;
}
