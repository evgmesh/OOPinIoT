//
// Created by Evgenii Meshcheriakov on 12/17/21.
//

#ifndef ASSIGNMENT13_CAR_H
#define ASSIGNMENT13_CAR_H
#include <iostream>

class Car {
    friend std::ostream &operator<<(std::ostream &out, const Car &car);
public:
    Car(const char* m="Ford", const char *l=nullptr, int ml=0) : model(m), license(l?l:(rand()%2?"FOO-":"BAR-") + std::to_string(rand()%999+1)), mileage(ml?ml:rand()%10000) {}
    ~Car() { std::cout << model << " " << license << " deleted" << std::endl; };
    void Read();
    std::string GetLicense() const { return license; }
private:
    std::string model;
    std::string license;
    int mileage;
};


#endif //ASSIGNMENT13_CAR_H
