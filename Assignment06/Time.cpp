/* Evgenii Meshcheriakov. Assignment 6 */

#include "Time.h"
using namespace std;

Time::Time(int hour0, int min0): hour(hour0), min(min0) {
}
bool Time::operator<(const Time &t2) const{
    int t1min = hour * 60 + min;
    int t2min = t2.hour * 60 + t2.min;
    return (t1min < t2min);
}
bool Time::operator>(const Time &t2) const{
    int t1min = hour * 60 + min;
    int t2min = t2.hour * 60 + t2.min;
    return (t1min > t2min);
}
bool Time::operator==(const Time &t2) const{
    int t1min = hour * 60 + min;
    int t2min = t2.hour * 60 + t2.min;
    return (t1min == t2min);
}
ostream &operator<<(ostream &out, const Time &t){
    out << setiosflags(ios::right)
        << setfill('0') << setw(2) << t.hour
        << ":" << setfill('0') << setw(2) << t.min
        << resetiosflags(ios::right);
    return out;
}
istream &operator>>(istream &in, Time &t) {
    char trash;
    in >> t.hour >> trash >> t.min;
    while (cin.fail() || t.hour > 23 || t.hour < 0
           || t.min > 59  || t.min < 0) {
        cout << "Please use following format - 00:00\n";
        in.clear();
        in.ignore(numeric_limits<streamsize>::max(), '\n');
        in >> t.hour >> trash >> t.min;
    }
    return in;
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