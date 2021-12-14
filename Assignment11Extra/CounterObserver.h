/* Evgenii Meshcheriakov. Assignment 11 Extra */

#ifndef ASSIGNMENT11EXTRA_COUNTEROBSERVER_H
#define ASSIGNMENT11EXTRA_COUNTEROBSERVER_H

#include "Counter.h"

class CounterObserver {
public:
    virtual void HandleLimitReached(Counter *ctr) = 0;
};


#endif //ASSIGNMENT11EXTRA_COUNTEROBSERVER_H
