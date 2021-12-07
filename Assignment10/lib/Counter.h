/* Evgenii Meshcheriakov. Assignment 10 */

#ifndef ASSIGNMENT10_COUNTER_H
#define ASSIGNMENT10_COUNTER_H


class Counter {
public:
    virtual void inc() = 0;
    virtual void dec() = 0;
    virtual operator int() = 0;
    virtual ~Counter() {};
};


#endif //ASSIGNMENT10_COUNTER_H
