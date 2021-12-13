#include <iostream>

using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
#if 0
    CounterUser cu(5);
    cu.IncrementBy(12); //OUTPUT: two times "Limit has been reached" CounterUser cu2(9);
    cu2.IncrementBy(9);
    cout << "Just passing time" << endl;
    cu2.IncrementBy(1); //OUTPUT: "Limit has been reached"
#endif
    return 0;
}
