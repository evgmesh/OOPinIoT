/* Evgenii Meshcheriakov. Assignment 9 */

#ifndef ASSIGNMENT09_CIRCLE_H
#define ASSIGNMENT09_CIRCLE_H

#include "Point.h"

class Circle: public Point{
public:
    Circle(double xcoord = 0.0, double ycoord = 0.0, double radius = 0.0);
    void input(const char *prompt) override;
    void output() const override;
    double area() const override;
private:
    double r;
};


#endif //ASSIGNMENT09_CIRCLE_H
