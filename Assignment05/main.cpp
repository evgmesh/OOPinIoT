/* Evgenii Meshcheriakov. Assignment 4 */

#include "Time.h"

void print(const vector<Time> &v)
{
    for(auto &t : v) {
        cout << t << endl;
    }
}


int main() {
    Time time1, time2, duration;

    time1.read("Enter time 1");
    time2.read("Enter time 2");
    if (time1<time2) {
        duration = time2 - time1;
        cout << "Starting time was " << time1 << endl;
    } else {
        duration = time1 - time2;
        cout << "Starting time was " << time2 << endl;
    }
    cout << "Duration was " << duration << endl;
    return 0;
}

