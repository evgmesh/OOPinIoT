/* Evgenii Meshcheriakov. Assignment 10 */

#include <iostream>
#include "lib/LimitedCounter.h"
#include "lib/OverflowCounter.h"

using namespace std;

void UseCounter(Counter& ctr, int num);

int main(int argc, char** argv) {

    LimitedCounter lc(6, 5);
    OverflowCounter oc(10,9);

    cout << oc << endl;
    UseCounter(oc, 5);
    cout << oc << endl; // should display zero
    UseCounter(oc, -1);
    cout << oc << endl; // should display 9
    oc.dec();
    cout << oc << endl; // should display 8

    cout << lc << endl;
    lc.inc();
    cout << lc << endl;
    lc.dec();
    cout << lc << endl;
    for(int i = 0; i < 10; ++i) lc.inc();
    cout << lc << endl;
    UseCounter(lc, -9);
    cout << lc << endl;

    return 0;
}

void UseCounter(Counter& ctr, int num) {
    while (num>0) {
        ctr.inc();
        --num;
    }
    while (num<0) {
        ctr.dec();
        ++num;
    }
}

#if 0
//one more way. less efficient in terms of resourses usage
void UseCounter(Counter& ctr, int num) {
    for (int i = 0; i < abs(num); ++i)
        num > 0 ? ctr.dec() : ctr.inc();
}
#endif
