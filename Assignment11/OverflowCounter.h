/* Evgenii Meshcheriakov. Assignment 11 */

#ifndef ASSIGNMENT11_OVERFLOWCOUNTER_H
#define ASSIGNMENT11_OVERFLOWCOUNTER_H
#include "iostream"
#include "Counter.h"
#include "Observer.h"

class OverflowCounter: public Counter{
public:
    OverflowCounter(int counter = 0, int upperlimit = 0);
    void inc() override;
    void dec() override;
    operator int() override;
    void SetObserver(Observer *);

private:
    int counter;
    int upperlim;
    Observer* obs;
    void Notify();
};


#endif //ASSIGNMENT11_OVERFLOWCOUNTER_H
