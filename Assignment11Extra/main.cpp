#include <iostream>
#include "Counter.h"
#include "Observer.h"
#include "OverflowCounter.h"
#include "LimitedCounter.h"

using namespace std;
void UseCounter(Counter& ctr, int num);
int main() {
    LimitedCounter lc(0,3), lc2(0,4);
    OverflowCounter ofc1(0,2), ofc2(0,2);
    Observer ob,ob1,ob2;
    lc.SetObserver(&ob);
    ofc1.SetObserver(&ob1);
    lc2.SetObserver(&ob2);
    ofc2.SetObserver(&ob2);

    cout << "OUTPUT: two times: \"The limit has been reached. Counter value is: 3\" \n";
    UseCounter(lc,4);
    cout << "OUTPUT: one time: \"The limit has been reached. Counter value is: 4\"\n";
    UseCounter(lc2,4);
    cout << "OUTPUT: three times: \"The limit has been reached. Counter value is: 0\" \n";
    UseCounter(ofc2,10);
    cout << "OUTPUT: one time: \"The limit has been reached. Counter value is: 0\" \n";
    UseCounter(lc,-3);
    cout << "OUTPUT: one time: \"The limit has been reached. Counter value is: 2\"\n";
    UseCounter(ofc1,-3);

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

