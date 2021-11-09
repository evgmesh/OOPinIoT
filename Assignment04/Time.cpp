//
// Created by Evgenii Meshcheriakov on 11/9/21.
//

#include "Time.h"

Time::Time() {
    int min = 0;
    int hour = 0;
}

void Time::read(const char *prompt) {
    cout << prompt << endl;
    cin >> hour >> min;
}
bool Time::lessThan(Time t2) {
    int t1min = hour * 60 + min;
    int t2min = t2.hour * 60 + t2.min;
    if(t1min <= t2min)
        return true;
    else
        return false;
}
void Time::display() {
    cout << setiosflags(ios::right)
         << setfill('0') << setw(2) << hour
         << ":" << setfill('0') << setw(2) << min
         << endl;
}
Time Time::subtract(Time t2) {
    Time ref;
    int dmin, t1min, t2min;
    t1min = hour * 60 + min;
    t2min = t2.hour * 60 + t2.min;
    dmin = t1min - t2min;
    ref.hour = dmin / 60;
    ref.min = dmin % 60;
    return ref;
}
