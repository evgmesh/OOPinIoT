/* Evgenii Meshcheriakov. Assignment 7 */

#include "RandGen.h"




using namespace std;
int main() {

    RandGen randGenLot, randGenVik(1,48), randGenEuro(1,50);
    vector<int> numbersLot(7), numbersVik(6), numbersEuro(5);

    generate(numbersLot.begin(), numbersLot.end(), randGenLot);
    generate(numbersVik.begin(), numbersVik.end(), randGenVik);
    generate(numbersEuro.begin(), numbersEuro.end(), randGenEuro);

    cout << "Lotto: ";
    copy(numbersLot.begin(),numbersLot.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    cout << "Viking lotto: ";
    copy(numbersVik.begin(),numbersVik.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    cout << "Eurojackpot: ";
    copy(numbersEuro.begin(),numbersEuro.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    sort(numbersLot.begin(), numbersLot.end());
    sort(numbersVik.begin(), numbersVik.end());
    sort(numbersEuro.begin(), numbersEuro.end());

    vector<int> intersect;
    set_intersection(numbersLot.begin(), numbersLot.end(),
                     numbersVik.begin(), numbersVik.end(),
                     back_inserter(intersect));
    cout << "Intersections of first two:" << endl;
    copy(intersect.begin(),intersect.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    // following code is not working as I wanted. need to change it;

    set_intersection(intersect.begin(), intersect.end(),
                     numbersEuro.begin(), numbersEuro.end(),
                     back_inserter(intersect));
    cout << "Intersections of all three:" << endl;
    copy(intersect.begin(),intersect.end(), ostream_iterator<int>(cout, " "));

    return 0;
}
