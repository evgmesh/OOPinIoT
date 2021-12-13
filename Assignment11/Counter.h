//
// Created by Evgenii Meshcheriakov on 12/8/21.
//

#ifndef ASSIGNMENT11_COUNTER_H
#define ASSIGNMENT11_COUNTER_H


class Counter {
public:
    virtual void inc() = 0;
    virtual void dec() = 0;
    virtual operator int() = 0;
    virtual ~Counter() = default;
};

#endif //ASSIGNMENT11_COUNTER_H
