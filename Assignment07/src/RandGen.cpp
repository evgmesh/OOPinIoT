/* Evgenii Meshcheriakov. Assignment 7 */

#include "../lib/RandGen.h"

RandGen::RandGen(int lower0, int upper0) : lower(lower0), upper(upper0), numbers(0) {
    srand(time(NULL));
}

int RandGen::operator()() {
    int number;
    do {
        number = rand() % (upper-lower + 1) + lower;
    } while (find(numbers.begin(), numbers.end(), number) != numbers.end());
    numbers.push_back(number);
    return number;
}