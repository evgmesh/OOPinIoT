#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <sstream>



using namespace std;
int main() {
    string buffer;
    vector<double> db;
    vector<double>::iterator i;
    double dbbuf = 0;
    cout << "Please enter numbers formate: [1.1]. End with negative number\n";
    getline(cin, buffer);
    stringstream (buffer) >> dbbuf;
    while (dbbuf != -1 && dbbuf != 0) {
        db.push_back(dbbuf);
        getline(cin, buffer);
        stringstream (buffer) >> dbbuf;
    }
    std::sort(db.begin(), db.end());
    for(auto i = db.begin(); i != db.end(); ++i)
        cout << *i << endl;
    return 0;
}
//
//    while (!(cin >> buf)) {
//        cout << "Bad value!\n";
//        cin.clear();
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//    }
