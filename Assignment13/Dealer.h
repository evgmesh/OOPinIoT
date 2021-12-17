//
// Created by Evgenii Meshcheriakov on 12/17/21.
//

#ifndef ASSIGNMENT13_DEALER_H
#define ASSIGNMENT13_DEALER_H

#include <vector>
#include <iostream>
#include "Website.h"
#include "Car.h"


class Dealer {
    friend std::ostream &operator<<(std::ostream &out, const Dealer &dealer);
public:
    Dealer(const char *name_ = "John Doe") : name(name_) {};
    ~Dealer() { std::cout << name << " deleted" << std::endl; };
    void buy();
    void sell();
    void add(Car *car) { cars.push_back(car); for (auto site : sites) site->advertise(car); }
    void add_site(Website *w) { sites.push_back(w); }
private:
    std::string name;
    std::vector<Car *> cars;
    std::vector<Website *> sites;
};


#endif //ASSIGNMENT13_DEALER_H
