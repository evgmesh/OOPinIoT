#include "Time.h"

int main() {
    char a;
    int hour, min;
    cout << "Enter time: ";
    cin >> hour >> a >> min;
    while (cin.fail()) {
        cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "error try again\n";
        cin >> hour >> a >> min;
    }
    cout << hour << ":" << min << endl
    << "hour + min\n" << hour+min << endl;

    return 0;
}

