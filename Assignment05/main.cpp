/* Evgenii Meshcheriakov. Assignment 5 */

#include "Time.h"

using namespace std;
void print(const vector<Time> &v)
{
    for(auto &t : v) {
        cout << t << endl;
    }
}


int main() {
#if 0
    Time time1, time2, duration, duration2;
    time1.read("Enter time 1");
    time2.read("Enter time 2");
    duration = time1 - time2;
    duration2 = time2 - time1;
    if (time1<time2) {
        cout << "Starting time was " << time1 << endl;
    } else {
        cout << "Starting time was " << time2 << endl;
    }
    cout << "Duration was " << duration << endl;
#endif
#if 1
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

