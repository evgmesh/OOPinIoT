/* Evgenii Meshcheriakov. Assignment 9 */


#include <iostream>
#include <vector>
#include <iterator>
#include <ctime>
#include "lib/Square.h"
#include "lib/Circle.h"

using namespace std;

void printer(const vector<shared_ptr<Point>> &pnt);

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

    printer(pnt);

    sort(pnt.begin(),pnt.end(),
         [](const shared_ptr<Point> &a, const shared_ptr<Point> &b) -> bool
         {return a->area() < b->area();});

    cout << "Sorted:\n";
    printer(pnt);

    // Part B. Adding 5 random objects to the vector. Data asked from user before adding to the vector
    srand(time(nullptr));
    int num;
    for(int i = 0; i<5; i++) {
        num = rand() % 3 + 1;
        if(num == 1) {
            Point p2;
            p2.input("Point:");
            pnt.push_back(make_shared<Point>(p2));
        }
        if(num == 2) {
            Circle c2;
            c2.input("Circle:");
            pnt.push_back(make_shared<Circle>(c2));
        }
        if(num == 3) {
            Square s2;
            s2.input("Square:");
            pnt.push_back(make_shared<Square>(s2));
        }

    }
    printer(pnt);

    return 0;

}
void printer(const vector<shared_ptr<Point>> &pnt) {
    for (auto const &p : pnt) {
        p->output();
    }
}
