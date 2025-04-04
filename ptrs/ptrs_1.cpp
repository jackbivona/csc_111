#include <iostream>
using namespace std;

int *dynamicarray(int);

int main()
{
    int size;
    int *arrayptr = nullptr;

    cout << "Please enter size of array: " << endl;
    cin >> size;
    arrayptr = dynamicarray(size);
    cout << "The address of the array is " << arrayptr << endl;
    delete [] arrayptr;
    return 0;
}

int *dynamicarray(int SIZE)
{
    int *array = nullptr;
    array = new int[SIZE];
    return array;
}

