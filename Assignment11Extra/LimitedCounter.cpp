/* Evgenii Meshcheriakov. Assignment 11 Extra */


#include "LimitedCounter.h"

LimitedCounter::LimitedCounter(int counter0, int upperlim0):
        counter(counter0<=upperlim0?counter0:upperlim0), upperlim(upperlim0) {
}

void LimitedCounter::inc() {
    if(counter < upperlim)
        ++counter;
}

void LimitedCounter::dec() {
    if(counter > 0)
        --counter;
}

LimitedCounter::operator int() {
    return counter;
}