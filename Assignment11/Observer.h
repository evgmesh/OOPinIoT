/* Evgenii Meshcheriakov. Assignment 11 */

#ifndef ASSIGNMENT11_OBSERVER_H
#define ASSIGNMENT11_OBSERVER_H

class Observer {
public:
    virtual void HandleLimitReached() = 0;
};
#endif //ASSIGNMENT11_OBSERVER_H
