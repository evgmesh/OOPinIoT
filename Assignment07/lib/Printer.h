/* Evgenii Meshcheriakov. Assignment 7 */

#ifndef ASSIGNMENT07_PRINTER_H
#define ASSIGNMENT07_PRINTER_H

#include <vector>
#include <iostream>

using namespace std;
class Printer {
public:
    Printer(int index = 1);
    void operator() (int i);
private:
    int index;
};


#endif //ASSIGNMENT07_PRINTER_H
