/* Evgenii Meshcheriakov. Assignment 9 */

#include "Square.h"

using namespace std;
Square::Square(double xcoord, double ycoord, double width, double height):
                Point(xcoord, ycoord), w(width), h(height) {
}

void Square::input(const char *prompt) {
    Point::input(prompt);
    cout << "Enter height: ";
    cin >> h;
    cout << "Enter width: ";
    cin >> w;
}

void Square::output() const {
    cout << "Square's area: " << area() << " ";
    Point::output();
}

double Square::area() const {
    return w*w;
}

