/* Evgenii Meshcheriakov. Assignment 11 Extra */


#ifndef ASSIGNMENT11EXTRA_LIMITEDCOUNTER_H
#define ASSIGNMENT11EXTRA_LIMITEDCOUNTER_H

#include "Counter.h"

class LimitedCounter: public Counter{
public:
    LimitedCounter(int counter = 0, int upperlimit = 0);
    void inc() override;
    void dec() override;
    operator int() override;
    void SetObserver(CounterObserver *) override;

private:
    int counter;
    int upperlim;
    std::vector<CounterObserver * > cov;
    void Notify();
};


#endif //ASSIGNMENT11EXTRA_LIMITEDCOUNTER_H
