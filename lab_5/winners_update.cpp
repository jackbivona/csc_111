#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream winners, // Input files
             update;
    ofstream winners_updated; // Output file

    const int SIZE = 200;
    string winnersarr[SIZE], // Arrays to store input file data
           updatearr[SIZE];

    // Open all of the files
    winners.open("WorldSeriesWinners.txt");
    update.open("newwinners.txt");
    winners_updated.open("WorldSeriesWinners_updated.txt");

    // Stream original file into the new update file
    int index = 0;
    while (getline(winners, winnersarr[index]))
        {
        winners_updated << winnersarr[index] << endl;
        index++;
        }
    
    index = 0;
    // Stream updates onto the end of the new update file
    while(getline(update, updatearr[index]))
        {
        winners_updated << updatearr[index] << endl;
        index++;
        }
    
    cout << "Submitted by: Jack Bivona";
    
    // Close all of the files
    winners.close();
    update.close();
    winners_updated.close();

    return 0;
}


