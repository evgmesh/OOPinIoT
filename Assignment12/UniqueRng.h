/* Evgenii Meshcheriakov. Assignment 12 */

#ifndef ASSIGNMENT12_UNIQUERNG_H
#define ASSIGNMENT12_UNIQUERNG_H
#include <vector>
#include <iostream>
#include <algorithm>

class UniqueRng {
public:
    UniqueRng(unsigned int min, unsigned int max);
    unsigned int operator()();
private:
    unsigned int min, max;
    std::vector<unsigned int> numbers;
};


#endif //ASSIGNMENT12_UNIQUERNG_H
