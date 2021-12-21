//
// Created by Evgenii Meshcheriakov on 12/17/21.
//

#include "Website.h"

Website::Website(const char *n) :
    name(n ? n : "www.cars" + std::to_string(rand() % 99 + 1) + ".com") {}

void advertise(Car *car) {
    listing.push_back(car);
}
void print(std::ostream &out = std::cout) {
    out << name << std::endl;
    for(auto car : listing) {
        out << *car;
        out << name << " end of list" << std::endl;
    }
}
void remove(Car *car) {
    listing.erase(std::remove(listing.begin(), listing.end(), car),listing.end());
}