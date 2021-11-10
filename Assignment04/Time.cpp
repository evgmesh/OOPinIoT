/* Evgenii Meshcheriakov. Assignment 4 */

#include "Time.h"

Time::Time(): min(0), hour(0) {
}

void Time::read(const char *prompt) {
    cout << prompt << endl;
    char trash;
    cin >> hour >> trash >> min;
    while (cin.fail() || hour > 23 || hour < 0
                      || min > 59  || min < 0) {
        cout << prompt << ". Format - 00:00\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> hour >> trash >> min;
    }
}
bool Time::lessThan(Time t2) const{
    int t1min = hour * 60 + min;
    int t2min = t2.hour * 60 + t2.min;
    return (t1min <= t2min);
}
void Time::display() const{
    cout << setiosflags(ios::right)
         << setfill('0') << setw(2) << hour
         << ":" << setfill('0') << setw(2) << min
         << endl;
}
Time Time::subtract(Time t2) const{
    Time ref;
    int dmin, t1min, t2min;
    t1min = hour * 60 + min;
    t2min = t2.hour * 60 + t2.min;
    dmin = t1min - t2min;
    ref.hour = dmin / 60;
    ref.min = dmin % 60;
    return ref;
}
