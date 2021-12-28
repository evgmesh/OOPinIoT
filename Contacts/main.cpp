#include <iostream>
#include "Person.h"

void file_remover();

int main() {

    Person p1("Person 1");
    std::cout << "p1 before:" << std::endl;      p1.Print();

    Person p2("Person 2", "dfsd", "767854", "dfsd", p1);
    std::cout << "p2 before:" << std::endl;    p2.Print();

    std::cout << "p1 after:" << std::endl;     p1.Print();

    return 0;
}
void file_remover(){
    char fileName[20];
    std::cout<<"Enter the Name of File: ";           std::cin>>fileName;
    !remove(fileName) ? std::cout<<"File Deleted Successfully!" : std::cout<<"Error Occurred!";
}
