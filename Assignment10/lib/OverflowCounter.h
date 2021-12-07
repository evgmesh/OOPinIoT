//
// Created by Evgenii Meshcheriakov on 12/7/21.
//

#ifndef ASSIGNMENT10_OVERFLOWCOUNTER_H
#define ASSIGNMENT10_OVERFLOWCOUNTER_H

#include "Counter.h"

class OverflowCounter: public Counter{
public:
    OverflowCounter(int counter, int upperlimit);
    void inc() override;
    void dec() override;
    operator int() override;

private:
    int counter;
    int upperlim;
};


#endif //ASSIGNMENT10_OVERFLOWCOUNTER_H
