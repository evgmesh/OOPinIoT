/* Evgenii Meshcheriakov. Assignment 7 */

#ifndef ASSIGNMENT07_RANDGEN_H
#define ASSIGNMENT07_RANDGEN_H

#include <vector>
#include <iostream>
#include <algorithm>

class RandGen {
    public:
        RandGen(): numbers() {srand(time(NULL));}
        int operator () ();

    private:
        std::vector<int> numbers;
};


#endif //ASSIGNMENT07_RANDGEN_H
