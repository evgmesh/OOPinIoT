/* Evgenii Meshcheriakov. Assignment 9 */

#include "Circle.h"


Circle::Circle(double xcoord, double ycoord, double radius): Point(xcoord,ycoord), r(radius) {
}
void Circle::input(const char *prompt) {
    Point::input(prompt);
}

void Circle::output() const {
    Point::output();
}

double Circle::area() const {
    return Point::area();
}
