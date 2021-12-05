/* Evgenii Meshcheriakov. Assignment 9 */

#ifndef ASSIGNMENT09_SQUARE_H
#define ASSIGNMENT09_SQUARE_H

#include "Point.h"

class Square: public Point{
public:
    Square(double xcoord = 0.0, double ycoord = 0.0, double width = 0.0, double height = 0.0);
    void input(const char *prompt) override;
    void output() const override;
    double area() const override;
private:
    double w;
    double h;
};


#endif //ASSIGNMENT09_SQUARE_H
