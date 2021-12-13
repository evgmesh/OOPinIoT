/* Evgenii Meshcheriakov. Assignment 11 */

#include "CounterUser.h"

void CounterUser::HandleLimitReached() {

}

CounterUser::CounterUser(int lim) {
    ofc.SetObserver(this);
}
