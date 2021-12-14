/* Evgenii Meshcheriakov. Assignment 11 Extra */


#ifndef ASSIGNMENT11EXTRA_COUNTER_H
#define ASSIGNMENT11EXTRA_COUNTER_H

class CounterObserver;
class Counter {
public:
    virtual void inc() = 0;
    virtual void dec() = 0;
    virtual void SetObserver(CounterObserver *) = 0;
    virtual operator int() = 0;
    virtual ~Counter() = default;
};

#endif //ASSIGNMENT11EXTRA_COUNTER_H
