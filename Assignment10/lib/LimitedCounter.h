//
// Created by Evgenii Meshcheriakov on 12/7/21.
//

#ifndef ASSIGNMENT10_LIMITEDCOUNTER_H
#define ASSIGNMENT10_LIMITEDCOUNTER_H

#include "Counter.h"

class LimitedCounter: public Counter{
public:
    LimitedCounter(int counter, int upperlimit);
    void inc() override;
    void dec() override;
    operator int() override;

private:
    int counter;
    int upperlim;
};


#endif //ASSIGNMENT10_LIMITEDCOUNTER_H
