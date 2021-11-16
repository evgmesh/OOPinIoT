/* Evgenii Meshcheriakov. Assignment 6 */

#include "Day.h"
using namespace std;

Day::Day() : day(0), month(""), list(){
}
bool Day::from_str(const string &s) {
    Time time1;
    istringstream sin(s);
    if (sin >> day) {}
    if (sin >> month) {}
    if (sin >> time1) {
        list.push_back(time1);
        return true;
    } else return false;
    /*
    while (sin >> day) {

    }
    while (sin >> month) {

    }
    while (sin >> time1) {
        list.push_back(time1);
    }
    */
}
string Day::to_str() {
    cout << day << " " << month;
    for (auto &t : list) {
        cout << t << " ";
    }
}
void Day::dst(int offset) {

}