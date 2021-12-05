/* Evgenii Meshcheriakov. Assignment 9 */

#ifndef ASSIGNMENT09_POINT_H
#define ASSIGNMENT09_POINT_H

#include <iostream>

class Point {
public:
    Point(double xcoord = 0.0, double ycoord = 0.0);
    virtual ~Point() = default;
    virtual void input(const char * prompt);
    virtual void output() const;
    virtual double area() const;
    void move(double deltax, double deltay);

private:
    double x;
    double y;
};


#endif //ASSIGNMENT09_POINT_H
