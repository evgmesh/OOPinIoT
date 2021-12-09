/* Evgenii Meshcheriakov. Assignment 10 */

#ifndef ASSIGNMENT10_LIMITEDCOUNTER_H
#define ASSIGNMENT10_LIMITEDCOUNTER_H

#include "Counter.h"

class LimitedCounter: public Counter{
public:
    LimitedCounter(int counter = 0, int upperlimit = 0);
    void inc() override;
    void dec() override;
    operator int() override;

private:
    int counter;
    int upperlim;
};


#endif //ASSIGNMENT10_LIMITEDCOUNTER_H
