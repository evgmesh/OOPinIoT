/* Evgenii Meshcheriakov. Assignment 11 Extra */

#ifndef ASSIGNMENT11EXTRA_OBSERVER_H
#define ASSIGNMENT11EXTRA_OBSERVER_H
#include "CounterObserver.h"
#include "Counter.h"

class Observer: public CounterObserver{
public:
    void HandleLimitReached(Counter *) override;

};

#endif //ASSIGNMENT11EXTRA_OBSERVER_H
