/* Evgenii Meshcheriakov. Assignment 1 */

#include <iostream>
#include<cstdlib>
using namespace std;

int mean(int *array, int n);

int main() {
    int size = 0, *a;
    srand(time(NULL));
    while (size <= 0) {
        cout << "How many numbers you what to use (only positive";
        cout << " numbers are allowed, quit with -1)? ";
        cin >> size;
        if(size == -1) {
            cout << "Bye-bye!";
            return -1;
        }
    }
    a = new int [size];
    for (int i = 0; i<size; i++) {
        a[i]=rand() % 100;
        cout << a[i] << " ";
    }
    cout << "\nMean of this " << size << " numbers is: " << mean(a,size);
    cout << endl;
    delete [] a;
    return 0;
}
int mean(int *array, int n)
{
    int sum = 0;
    for(int i = 0; i<n; i++)
        sum += array[i];
    return sum/n;
}
