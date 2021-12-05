/* Evgenii Meshcheriakov. Assignment 9 */

#include "Square.h"

Square::Square(double xcoord, double ycoord, double width, double height):
                Point(xcoord, ycoord), w(width), h(height) {
}

void Square::input(const char *prompt) {
    Point::input(prompt);
}

void Square::output() const {
    Point::output();
}

double Square::area() const {
    return Point::area();
}
