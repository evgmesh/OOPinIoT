#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
    int size;
    cout << "Please provide array size" << endl;
    cin >> size;
    int *a;
    a = new int [size];
    for (int i = 0; i<size; i++) {
        a[i]=rand() % 100;
        cout << a[i] << ",";
    }
    delete a;

}