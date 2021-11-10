//
// Created by Evgenii Meshcheriakov on 11/9/21.
//

#ifndef ASSIGNMENT04_TIME_H
#define ASSIGNMENT04_TIME_H

#include <iostream>
#include <iomanip>

using namespace std;
class Time {
    public:
        Time();
        void read(const char *prompt);
        bool lessThan(Time t2);
        void display();
        Time subtract(Time t2);

    private:
        int min;
        int hour;
};


#endif //ASSIGNMENT04_TIME_H