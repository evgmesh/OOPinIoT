#include <iostream>
#include "Counter.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
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