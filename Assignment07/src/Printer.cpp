/* Evgenii Meshcheriakov. Assignment 7 */

#include "../lib/Printer.h"
Printer::Printer(int index0) : index(index0) {

}

void Printer::operator()(int i)
{
    cout << "#" << index++ << ": " << i << endl;
}