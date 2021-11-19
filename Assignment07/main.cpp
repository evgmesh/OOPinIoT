/* Evgenii Meshcheriakov. Assignment 7 */

#include "lib/RandGen.h"
#include "lib/Printer.h"

using namespace std;

void gen(string game, vector<int> &numbers, RandGen &randGen);
void intersect(vector<int> &nmb1, vector<int> &nmb2, vector<int> &nmbinter);

int main() {
    string again("");
    RandGen randGenLot, randGenVik(1, 48), randGenEuro(1, 50);
    vector<int> numbersLot(7), numbersVik(6), numbersEuro(5);
    do {
        vector<int> intersected1, intersected2;
        gen("Lotto: ", numbersLot, randGenLot);
        gen("Viking lotto: ", numbersVik, randGenVik);

        cout << "Matching numbers" << endl;
        intersect(numbersLot, numbersVik, intersected1);
        gen("Eurojackpot: ", numbersEuro, randGenEuro);

        cout << "Matching numbers in three sets:" << endl;
        intersect(intersected1, numbersEuro, intersected2);
        cout << "Do you what to continue (type \"yes\" for continue)?" << endl;

        cin >> again;
    } while (again == "yes");

    return 0;
}
void gen(string prompt, vector<int> &numbers, RandGen &randGen)
{
    cout << prompt;
    generate(numbers.begin(), numbers.end(), randGen);
    copy(numbers.begin(), numbers.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    sort(numbers.begin(), numbers.end());
}
void intersect(vector<int> &nmb1, vector<int> &nmb2, vector<int> &nmbinter)
{
    Printer printer;
    set_intersection(nmb1.begin(), nmb1.end(), nmb2.begin(), nmb2.end(),
                     back_inserter(nmbinter));
    if(!nmbinter.empty()) {
        for_each(nmbinter.begin(), nmbinter.end(), printer);
        cout << endl;
    }
    else
        cout << "No match!\n";
}

