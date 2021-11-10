/* Evgenii Meshcheriakov. Assignment 5 */

#ifndef ASSIGNMENT05_TIME_H
#define ASSIGNMENT05_TIME_H

#include <iostream>
#include <iomanip>
#include <vector>


using namespace std;
class Time {
    friend ostream &operator<<(ostream &out, const Time &t);
public:
    Time();
    void read(const char *prompt);
    bool operator<(const Time &t2) const;
    Time operator-(const Time &t2) const;

private:
    int min;
    int hour;
};


#endif //ASSIGNMENT05_TIME_H
