/* Evgenii Meshcheriakov. Assignment 12 */

#include "UniqueRng.h"
#include <exception>
UniqueRng::UniqueRng(unsigned int min0, unsigned int max0): min(min0), max(max0), numbers(0) {
    srand(time(NULL));
}

unsigned int UniqueRng::operator()() {
    unsigned int number;
    if (numbers.size() > (max - min)) {
        throw(std::runtime_error("Unable to produce unique random number"));
    }
    do {
        number = rand() % (max-min + 1) + min;
    } while (find(numbers.begin(), numbers.end(), number) != numbers.end());

    numbers.push_back(number);
    return number;
}
