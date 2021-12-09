/* Evgenii Meshcheriakov. Assignment 10 */

#ifndef ASSIGNMENT10_OVERFLOWCOUNTER_H
#define ASSIGNMENT10_OVERFLOWCOUNTER_H

#include "Counter.h"

class OverflowCounter: public Counter{
public:
    OverflowCounter(int counter = 0, int upperlimit = 0);
    void inc() override;
    void dec() override;
    operator int() override;

private:
    int counter;
    int upperlim;
};


#endif //ASSIGNMENT10_OVERFLOWCOUNTER_H
