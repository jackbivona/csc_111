#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int SIZE;
    cout << "Enter # of students in the class: ";
    cin >> SIZE;

    double *testptr = new double[SIZE];

    double sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter the score for Student " << i + 1 << ": ";
        cin >> *(testptr + i);
        sum += *(testptr + i);
    }

    double avg = sum / SIZE;
    
    cout << setprecision(2) << fixed;
    cout << "The class average is " << avg;
    delete [] testptr;
    return 0;
}