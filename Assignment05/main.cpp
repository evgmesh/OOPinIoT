/* Evgenii Meshcheriakov. Assignment 4 */

#include "Time.h"

int main() {
    Time time1, time2, duration;
    time1.read("Enter time 1");
    time2.read("Enter time 2");
    if (time1 < time2) {
        cout << "time 1 is less: ";
        cout << time1;
    } else if(time2<time1){
        cout << "time 2 is less: ";
        cout << time2;
    }
    return 0;
}

