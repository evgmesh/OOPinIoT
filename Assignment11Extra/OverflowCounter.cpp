/* Evgenii Meshcheriakov. Assignment 11 Extra */

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

void OverflowCounter::SetObserver(CounterObserver *observer) {
    cov.push_back(observer);
}

void OverflowCounter::Notify() {
//    for(auto &ob : cov)
//        ob->HandleLimitReached();
}
