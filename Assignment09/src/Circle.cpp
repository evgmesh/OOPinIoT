/* Evgenii Meshcheriakov. Assignment 9 */

#include "../lib/Circle.h"

using namespace std;
Circle::Circle(double xcoord, double ycoord, double radius): Point(xcoord,ycoord), r(radius) {
}
void Circle::input(const char *prompt) {
    Point::input(prompt);
    cout << "Enter radius: ";
    cin >> r;
}

void Circle::output() const {
    cout << "Circle's area: " << area() << " ";
    Point::output();
}

double Circle::area() const {
    return 3.14159f * r * r;
}
