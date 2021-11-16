/* Evgenii Meshcheriakov. Assignment 6 */

#include "Time.h"
#include "Day.h"

using namespace std;
int main() {
    ifstream inputFile("../lab6_calendar.txt");

    if (!inputFile.is_open()) {
        cout << "Unable to open file" << endl;
        return 1;
    }

    string line;
    vector<Day> cal;
    Day day;

    while (getline(inputFile, line)) {
        if (day.from_str(line)) {
            cal.push_back(day);
        }
    }
    cout << "Calendar" << endl;

    for (auto& e : cal) {
        cout << e.to_str() << endl;
    }

    return 0;
}




