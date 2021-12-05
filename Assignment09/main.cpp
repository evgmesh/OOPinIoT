/* Evgenii Meshcheriakov. Assignment 9 */


#include <iostream>
#include "Square.h"
#include "Circle.h"
#include <vector>

using namespace std;
int main() {
    vector<shared_ptr<Point>> pnt;
    pnt.push_back(make_shared<Point>(1.0, 1.0));
    pnt.push_back(make_shared<Circle>(2.0, 2.0, 2.0));
    pnt.push_back(make_shared<Square>(5.0, 5.0, 2.0, 2.0));
    pnt[0]->input("Point:");
    pnt[1]->input("Circle:");
    pnt[2]->input("Square:");
    for (auto p : pnt) {
        p->output();
    }
    return 0;

}
