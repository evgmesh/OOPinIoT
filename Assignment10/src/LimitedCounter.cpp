//
// Created by Evgenii Meshcheriakov on 12/7/21.
//

#include "../lib/LimitedCounter.h"

LimitedCounter::LimitedCounter(int initial0, int upper0): counter(initial0), upperlim(upper0) {
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
