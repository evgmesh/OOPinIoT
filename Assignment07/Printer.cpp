

#include "Printer.h"
Printer::Printer(int index0) : index(index0) {

}

void Printer::operator()(int i)
{
    cout << "#" << index++ << ": " << i << endl;
}