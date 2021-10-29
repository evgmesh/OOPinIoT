#include <iostream>
#include<cstdlib>
using namespace std;

int mean(int *array, int n);

int main() {
    int size, *a;
    srand(time(NULL));
    cout << "How many numbers you what to use?" << endl;
    cin >> size;
    a = new int [size];
    for (int i = 0; i<size; i++) {
        a[i]=rand() % 100;
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Mean of this " << size << " numbers is: " << mean(a,size);
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