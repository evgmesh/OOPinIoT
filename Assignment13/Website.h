//
// Created by Evgeny Meshcheryakov on 18.12.2021.
//

#ifndef ASSIGNMENT13_WEBSITE_H
#define ASSIGNMENT13_WEBSITE_H

#include <vector>

#include "Car.h"
class Website {
public:
    Website(const char *n = nullptr);
    ~Website() { std::cout << name << " deleted" << std::endl; };
    void advertise(Car *car);
    void print(std::ostream &out = std::cout);
    void remove(Car *car);
private:
    std::vector<Car *> listing;
    std::string name;
};


#endif //ASSIGNMENT13_WEBSITE_H
