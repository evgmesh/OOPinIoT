/* Evgenii Meshcheriakov. Assignment 10 */

#include "../lib/OverflowCounter.h"


OverflowCounter::OverflowCounter(int counter0, int upperlimit0): counter(counter0), upperlim(upperlimit0) {
}

void OverflowCounter::inc() {
    counter < upperlim ? ++counter : counter = 0;
}

void OverflowCounter::dec() {
    counter > 0 ? --counter : counter = upperlim;
}

OverflowCounter::operator int() {
    return counter;
}
