/* Evgenii Meshcheriakov. Assignment 11 */

#ifndef ASSIGNMENT11_COUNTERUSER_H
#define ASSIGNMENT11_COUNTERUSER_H
#include "Observer.h"
#include "OverflowCounter.h"

class CounterUser: public Observer{
public:
    CounterUser(int lim = 5);
    void HandleLimitReached() override;
    void IncrementBy(int n);

private:
    OverflowCounter ofc;
};



#endif //ASSIGNMENT11_COUNTERUSER_H
