/* Evgenii Meshcheriakov. Assignment 6 */

#ifndef ASSIGNMENT06_TIME_H
#define ASSIGNMENT06_TIME_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

class Time {
    friend std::ostream &operator<<(std::ostream &out, const Time &t);
    friend std::istream &operator>>(std::istream &in, Time &t);

public:
    Time(int hour0 = 0, int min0 = 0);
    bool operator<(const Time &t2) const;
    bool operator>(const Time &t2) const;
    bool operator==(const Time &t2) const;
    Time operator+(const Time &t2) const;
    Time operator-(const Time &t2) const;
    Time operator++(int);
    Time &operator++();

private:
    int hour;
    int min;
    void plus_one_min();
    int total_min(Time t2, bool plus) const;
};

#endif //ASSIGNMENT06_TIME_H
