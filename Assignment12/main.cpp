/* Evgenii Meshcheriakov. Assignment 12 */

#include <iostream>
#include "UniqueRng.h"


void test_generator(UniqueRng ur, int count);

int main() {
    std::cout << "Hello, World!" << std::endl;
#if 0
    UniqueRng randGen(5, 13);

    test_generator(randGen, 6);
    test_generator(randGen, 9);
    test_generator(randGen, 13);

    UniqueRng randGen2(1, 35);
    test_generator(randGen2, 7);
    test_generator(randGen2, 7);
    test_generator(randGen2, 7);
    test_generator(randGen2, 70);
#endif
    return 0;
}

void test_generator(UniqueRng ur, int count) {

}