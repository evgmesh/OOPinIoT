/* Evgenii Meshcheriakov. Assignment 7 */

#include "RandGen.h"

using namespace std;
int main() {
    vector<int> numbers(10);
    RandGen randGen;
    generate(numbers.begin(), numbers.end(), randGen);
    for (auto n : numbers)
        cout << n << endl;
    return 0;
}
