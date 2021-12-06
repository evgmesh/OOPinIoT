/* Evgenii Meshcheriakov. Assignment 9 */


#include <iostream>
#include <vector>
#include <iterator>
#include "Square.h"
#include "Circle.h"

using namespace std;
int main() {
    vector<shared_ptr<Point>> pnt;
    shared_ptr<Point> p1(new Point);
    shared_ptr<Point> c1(new Circle);
    shared_ptr<Point> s1(new Square);
    pnt.push_back(make_shared<Point>(1.0, 1.0));
    pnt.push_back(make_shared<Circle>(2.0, 2.0, 2.0));
    pnt.push_back(make_shared<Square>(5.0, 5.0, 2.0, 2.0));
    p1->input("Point:");
    c1->input("Circle:");
    s1->input("Square:");
    pnt.push_back(s1);
    pnt.push_back(c1);
    pnt.push_back(p1);
    for (auto const &p : pnt) {
        p->output();
    }

    sort(pnt.begin(),pnt.end(),
         [](const shared_ptr<Point> &a, const shared_ptr<Point> &b) -> bool
         {return a->area() < b->area();});

    cout << "Sorted:\n";
    for (auto const &p : pnt) {
        p->output();
    }
    return 0;

}
