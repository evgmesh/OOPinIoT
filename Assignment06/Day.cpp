/* Evgenii Meshcheriakov. Assignment 6 */

#include "Day.h"
using namespace std;

Day::Day() : day(0), month(""), list(0){
}
bool Day::from_str(const string &s) {
    *this = Day();      Time t;
    string trash;       bool read = false;
    istringstream sin(s);
    if(sin >> day >> month) {
        while (sin) {
            if(sin >> t) {
                list.push_back(t);
                sort(list.begin(), list.end());
                read = true;
            } else {
                sin.clear();
                sin >> trash;
            }
        }
    }
    return read;
}
string Day::to_str() const{
    ostringstream out;
    out << day << " " << month << " ";
    for (auto &t : list) {
        out << t << " ";
    }
    return out.str();
}
void Day::dst(int offset) {
    if(offset < 0)
        offset += 24;
    Time t2(offset, 0);
    for (auto &t : list)
        t = t + t2;
}
