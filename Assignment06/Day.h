/* Evgenii Meshcheriakov. Assignment 6 */

#ifndef ASSIGNMENT06_DAY_H
#define ASSIGNMENT06_DAY_H

#include "Time.h"

class Day {
public:
    Day();
    bool from_str(const string &s);
    string to_str();
    void dst(int offset);
private:
    int day;
    string month;
    vector<Time> list;
};


#endif //ASSIGNMENT06_DAY_H
