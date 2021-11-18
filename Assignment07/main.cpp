/* Evgenii Meshcheriakov. Assignment 7 */

#include "RandGen.h"
#define LOTTO 1
#define VIKING 1
#define EUJACKP 1



using namespace std;
int main() {
#ifdef LOTTO
    cout << "Lotto:";
    vector<int> numbers(7);
    RandGen randGen;
    generate(numbers.begin(), numbers.end(), randGen);
    for (auto n : numbers)
        cout << " " << n;
    cout << endl;
#endif

#ifdef VIKING
    cout << "Viking lotto:";
    vector<int> numbers2(6);
    RandGen randGen2(1,48);
    generate(numbers2.begin(), numbers2.end(), randGen2);
    for (auto n : numbers2)
        cout << " " << n;
    cout << endl;
#endif

#ifdef EUJACKP
    cout << "Eurojackpot:";
    vector<int> numbers3(5);
    RandGen randGen3(1,50);
    generate(numbers3.begin(), numbers3.end(), randGen2);
    for (auto n : numbers3)
        cout << " " << n;
    cout << endl;
#endif
    return 0;
}
