//
// Created by Evgenii Meshcheriakov on 12/17/21.
//

#include "Car.h"

void Car::Read()
{
    //std::cout << "Enter car information" << std::endl;
    // replace the following with your own code
    model = "Seat";
    license = (rand() % 2 ? "ZAP-" : "ZIP-") + std::to_string(rand() % 999 + 1);
    mileage = 10000 + rand() % 10000;
}

std::ostream & operator<<(std::ostream & out, const Car & car)
{
    std::cout << "Model: " << car.model << std::endl << "License: " << car.license << std::endl << "Mileage: " << car.mileage << std::endl;

    return out;
}