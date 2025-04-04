#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

int main()
{
    // Define variables
    ifstream datafile;
    double datavar;
    int count = 0,
        sum = 0,
        max = INT_MIN,
        min = INT_MAX;
    double avg;

    datafile.open("statistic.txt");

    // Ensure that the text file opens properly
    while(!datafile)
        {
        cout << "Unable to access file. ";
        cout << "Press Enter to retry or Q to quit.";
        char input = cin.get();
        if (input == 'q')
            return 0;
        else
            datafile.open("statistic.txt");
        }

    // Stream the contents of the file into a variable
    while(datafile >> datavar)
        {
        // Add up each value into a sum
        sum += datavar;
        // Increment count for each entry
        ++count;
        // Set min and max values
        if (datavar > max)
            max = datavar;
        if (datavar < min)
            min = datavar;
        }
    
    // Calculate average
    avg = static_cast<double>(sum) / count;


    // Output statistics
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    cout << "Total: " << sum << endl;

    // Format Average to two decimal points 
    cout << setprecision(2) << fixed;
    cout << "Average: " << avg << endl;
    cout << setprecision(0);

    cout << "Number of Records: " << count << endl;

    datafile.close();
    return 0;
}