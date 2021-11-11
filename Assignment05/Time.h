/* Evgenii Meshcheriakov. Assignment 5 */

#ifndef ASSIGNMENT05_TIME_H
#define ASSIGNMENT05_TIME_H

#include <iostream>
#include <iomanip>
#include <vector>

#define MAXMIN 60

class Time {
    friend std::ostream &operator<<(std::ostream &out, const Time &t);
public:
    Time();
    void read(const char *prompt);
    bool operator<(const Time &t2) const;
    Time operator+(const Time &t2) const;
    Time operator-(const Time &t2) const;
    Time operator++(int);
    Time &operator++();

private:
    int min;
    int hour;
};


#endif //ASSIGNMENT05_TIME_H
