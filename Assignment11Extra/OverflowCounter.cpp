/* Evgenii Meshcheriakov. Assignment 11 Extra */

#include "OverflowCounter.h"

OverflowCounter::OverflowCounter(int counter0, int upperlimit0):
        counter(counter0<=upperlimit0?counter0:upperlimit0), upperlim(upperlimit0) {
}

void OverflowCounter::inc() {
    if(counter < upperlim)
        ++counter;
    else {
        counter = 0;
        Notify();
    }
}

void OverflowCounter::dec() {
    if(counter > 0) {
     --counter;
    } else {
        counter = upperlim;
        Notify();
    }
}

OverflowCounter::operator int() {
    return counter;
}

void OverflowCounter::SetObserver(CounterObserver *observer) {
    cov.push_back(observer);
}

void OverflowCounter::Notify() {
    for(auto &ob : cov)
        ob->HandleLimitReached(this);
}
