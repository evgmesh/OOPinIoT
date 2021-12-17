/* Evgenii Meshcheriakov. Assignment 11 Extra */


#include "LimitedCounter.h"

LimitedCounter::LimitedCounter(int counter0, int upperlim0):
        counter(counter0<=upperlim0?counter0:upperlim0), upperlim(upperlim0) {
}

void LimitedCounter::inc() {
    if(counter < upperlim) {
        ++counter;
        if(counter == upperlim)
            Notify();
    } else
        Notify();
}

void LimitedCounter::dec() {
    if(counter > 0) {
        --counter;
    }
    if(counter == 0)
        Notify();
}

LimitedCounter::operator int() {
    return counter;
}

void LimitedCounter::SetObserver(CounterObserver * observer) {
    cov.push_back(observer);
}

void LimitedCounter::Notify() {
    for(auto &ob : cov)
        ob->HandleLimitReached(this);
}
