#include <iostream>
#include <vector>
#include <iomanip>
#include <limits>

void rmvBadInpt();
double getDouble();

using namespace std;
int main() {

    vector<double> db;
    double x = 0;
    cout << "Please enter numbers with format: [1.1]. End with negative number\n";
    while ((x = getDouble()) >= 0)
        db.push_back(x);
    sort(db.begin(), db.end());
    if(!db.empty()) {
        for(auto i = db.begin(); i != db.end(); ++i)
        {
            cout << fixed;
            cout << setprecision(3) << *i << endl;
        }
    }
    return 0;
}
void rmvBadInpt()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
double getDouble()
{
    double db{};
    cin >> db;
    while (cin.fail())
    {
        cin.clear();
        rmvBadInpt();
        cout << "Sorry, that input is invalid.  Please try again.\n";
        cin >> db;
    }
    rmvBadInpt();
    return db;
}