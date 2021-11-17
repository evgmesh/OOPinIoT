/* Evgenii Meshcheriakov. Assignment 7 */

#include "RandGen.h"

int RandGen::operator()() {
    int number;
    do {
        number = rand() % 10 + 1;
    } while (find(numbers.begin(), numbers.end(), number) != numbers.end());
    numbers.push_back(number);
    return number;
}