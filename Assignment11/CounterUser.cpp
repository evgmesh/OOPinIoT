/* Evgenii Meshcheriakov. Assignment 11 */

#include "CounterUser.h"

using namespace std;
void CounterUser::HandleLimitReached() {
    cout << "The limit has been reached" << endl;
}

CounterUser::CounterUser(int lim) {
    ofc.SetObserver(this);
}
