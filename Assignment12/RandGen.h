/* Evgenii Meshcheriakov. Assignment 12 */

#ifndef ASSIGNMENT12_RANDGEN_H
#define ASSIGNMENT12_RANDGEN_H
#include <vector>
#include <iostream>
#include <algorithm>

class RandGen {
public:
    RandGen(int lower = 1, int upper = 40);
    int operator() ();

private:
    int lower;
    int upper;
    std::vector<int> numbers;
};


#endif //ASSIGNMENT12_RANDGEN_H
