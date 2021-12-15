/* Evgenii Meshcheriakov. Assignment 11 */

#include "OverflowCounter.h"

OverflowCounter::OverflowCounter(int counter0, int upperlimit0):
        counter(counter0<=upperlimit0?counter0:upperlimit0), upperlim(upperlimit0) {
}

void OverflowCounter::inc() {
    if(counter < upperlim)
        ++counter;
    else {
        Notify();
        counter = 0;
    }
}

void OverflowCounter::dec() {
    counter > 0 ? --counter : counter = upperlim;
}

OverflowCounter::operator int() {
    return counter;
}

void OverflowCounter::SetObserver(Observer *observer) {
    obs = observer;
}

void OverflowCounter::Notify() {
    obs->HandleLimitReached();
}


