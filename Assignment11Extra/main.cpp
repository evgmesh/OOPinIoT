#include <iostream>
#include "Counter.h"
#include "Observer.h"
#include "OverflowCounter.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    OverflowCounter ofc;
    Observer ob;
    ofc.SetObserver(ob)

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