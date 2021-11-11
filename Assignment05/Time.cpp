/* Evgenii Meshcheriakov. Assignment 5 */

#include "Time.h"
using namespace std;

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
bool Time::operator<(const Time &t2) const{
    int t1min = hour * 60 + min;
    int t2min = t2.hour * 60 + t2.min;
    return (t1min <= t2min);
}
ostream &operator<<(ostream &out, const Time &t){
    out << setiosflags(ios::right)
         << setfill('0') << setw(2) << t.hour
         << ":" << setfill('0') << setw(2) << t.min
         << resetiosflags(ios::right);
    return out;
}
Time Time::operator+(const Time &t2) const {
    Time ref;
    int tmin = total_min(t2, true);;
    ref.hour = (tmin / 60) % 24;
    ref.min = tmin % 60;
    return ref;
}
Time Time::operator-(const Time &t2) const {
    Time ref;
    int tmin = total_min(t2, false);
    if(tmin < 0)
        tmin += (24 * 60);
    ref.hour = tmin / 60;
    ref.min = tmin % 60;
    return ref;
}
Time Time::operator++(int) {
    Time old = *this;
    plus_one_min();
    return old;
}
Time &Time::operator++() {
    plus_one_min();
    return *this;
}
void Time::plus_one_min() {
    int minutes = hour * 60 + min;
    minutes++;
    hour = (minutes / 60) % 24;
    min = minutes % 60;
}

int Time::total_min(Time t2, bool plus) const{
    int t1min, t2min;
    t1min = hour * 60 + min;
    t2min = t2.hour * 60 + t2.min;
    return plus ? (t1min + t2min) : (t1min - t2min);
}
