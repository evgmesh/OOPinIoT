/* Evgenii Meshcheriakov. Assignment 9 */


#include "../lib/Point.h"

using namespace std;
Point::Point(double xcoord, double ycoord): x(xcoord), y(ycoord) {

}

void Point::input(const char *prompt) {
    cout << prompt << endl;
    cout << "Enter x:";
    cin >> x;
    cout << "Enter y:";
    cin >> y;
}

void Point::output() const {
    cout << "Coordinates: (" << x << "," << y << ")" << endl;
}

double Point::area() const {
    return 0.0;
}

void Point::move(double deltax, double deltay) {

}
