/* Evgenii Meshcheriakov. Assignment 11 Extra */

#include "Observer.h"

void Observer::HandleLimitReached(Counter * cnt) {
    std::cout << "The limit has been reached. Counter value is: "
            << *cnt << std::endl;
}
