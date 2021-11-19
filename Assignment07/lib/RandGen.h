/* Evgenii Meshcheriakov. Assignment 7 */

#ifndef ASSIGNMENT07_RANDGEN_H
#define ASSIGNMENT07_RANDGEN_H

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


#endif //ASSIGNMENT07_RANDGEN_H
