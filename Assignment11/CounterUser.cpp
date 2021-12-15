/* Evgenii Meshcheriakov. Assignment 11 */

#include "CounterUser.h"


void CounterUser::HandleLimitReached() {
    std::cout << "The limit has been reached" << std::endl;
}

CounterUser::CounterUser(int lim): ofc(0, lim) {
    ofc.SetObserver(this);
}

void CounterUser::IncrementBy(int n) {
    for (int i = 0; i<n; i++) ofc.inc();
}
