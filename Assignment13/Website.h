//
// Created by Evgenii Meshcheriakov on 12/17/21.
//

#ifndef ASSIGNMENT13_WEBSITE_H
#define ASSIGNMENT13_WEBSITE_H


class Website {
public:
    Website(const char *n = nullptr) : name(n ? n : "www.cars" + std::to_string(rand() % 99 + 1) + ".com") {}
    ~Website() { std::cout << name << " deleted" << std::endl; };
    void advertise(Car *car) { listing.push_back(car); }
    void print(std::ostream &out = std::cout) { out << name << std::endl; for(auto car : listing) out << *car; out << name << " end of list" << std::endl;
    }
    void remove(Car *car) { listing.erase(std::remove(listing.begin(), listing.end(), car),listing.end()); }
private:
    std::vector<Car *> listing;
    std::string name;
};


#endif //ASSIGNMENT13_WEBSITE_H
