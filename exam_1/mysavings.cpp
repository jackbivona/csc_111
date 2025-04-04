#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    
    // Define variables
    ifstream inputFile;
    double savings,
           total = 0,
           avg;
    int count = 0;

    // Open the data file
    inputFile.open("savings.txt");

    // Input validation
    while(!inputFile)
    {
        // Request input from user
        cout << "Unable to access file. ";
        cout << "Press Enter to retry or type q to quit.";
        char input = cin.get();
        if (input == 'q')
            return 0;
        else
            inputFile.open("savings.txt");
    }

    // Stream data into savings variable and increment variables
    while (inputFile >> savings)
    {
        ++count;
        total += savings;
    }

    // Input validation
    // Prevent division by zero error
    if (count == 0)
    {
        cout << "The file is empty." << endl;
        return 0;
    }

    // Calculate avg
    avg = total / count;
    
    // Format and output data
    cout << setprecision(2) << fixed;
    cout << "You averaged $" << avg << " savings per day ";
    cout << "and reached a total of $" << total << " saved in ";

    cout << setprecision(0);
    cout << count << " days." << endl;

    cout << "Submitted by: Jack Bivona";

    // Close the file
    inputFile.close();

return 0;

}