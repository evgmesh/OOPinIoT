#include "CounterUser.h"

using namespace std;
int main() {
    CounterUser cu(2);
    cu.IncrementBy(6); //OUTPUT: two times "Limit has been reached"
    CounterUser cu2(9);
    cu2.IncrementBy(9);
    cout << "Just passing time" << endl;
    cu2.IncrementBy(1); //OUTPUT: "Limit has been reached"

    return 0;
}
