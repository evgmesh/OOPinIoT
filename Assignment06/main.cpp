/* Evgenii Meshcheriakov. Assignment 6 */

#include "Time.h"
#include "Day.h"

using namespace std;

void print(const vector<Time> &v)
{
    for(auto &t : v) {
        cout << t << endl;
    }
}


int main() {
#if 1
    Time time1, time2, duration;
    Time time3(10, 20);
    cout << "Enter time 1: " << endl;
    cin >> time1;
//    time2.read("Enter time 2");
    if (time1>time3) {
        duration = time1 - time3;
        cout << "Starting time was " << time3 << endl;
    } else if (time1 == time3) {
        cout << "Equal times!" << endl;
    }
    else {
        duration = time3 - time1;
        cout << "Starting time was " << time1 << endl;
    }

    cout << "Duration was " << duration << endl;
    cout << time1 + time3 << endl;
#endif
#if 0
    vector<Time> tv(2);
    for(auto &t : tv) {
        t.read("Enter time:");
    }

    cout << "Post-increment: \nOriginal time:" << endl;
    print(tv);
    for(auto &t : tv) {
        cout << t++ << endl;
    }
    cout << "Time after loop with post-increment" << endl;
    print(tv);
    cout << "Pre-increment: " << endl;
    for(auto &t : tv) {
        cout << ++t << endl;
    }
    sort(tv.begin(), tv.end());

    cout << "Sorted times: " << endl;
    print(tv);
#endif
    return 0;
}




