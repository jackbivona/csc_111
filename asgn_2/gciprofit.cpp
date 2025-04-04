// General Crates, Inc builds custom designed wooden crates
// Calculate the volume, cost, customer price and profit for any GCI builds

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

const double COST_PER_CUBIC_FOOT = 0.23,
             CHARGE_PER_CUBIC_FOOT = 0.5;

double length,
       width,
       height,
       volume, 
       cost,
       charge,
       profit;

    // Retreive dimension input from the user
    cout << "Length = ";
    cin >> length;
    cout << "Width = ";
    cin >> width;
    cout << "Height = ";
    cin >> height;

    // Input validation ensuring dimensions are between (0,24]
    if (length > 0 && length <= 24){
        if (width > 0 && width <= 24){
            if (height > 0 && height <= 24){
                // nothing happens
            }else{
            cout << "Height value is invalid. ",
            cout << " Must be between 0-24 feet";
            return 0;
            }
        }else{
            cout << "Width value is invalid. ",
            cout << " Must be between 0-24 feet";
            return 0;
            }
    }else{
    cout << "Length value is invalid. ",
    cout << " Must be between 0-24 feet";
    return 0;
    }

    // Formatting output to 2 decimal points
    cout << setprecision(2) << fixed;

    // Calculate and output volume
    cout << "Output of Test Case: ";
    volume = length * width * height;
    cout << "Volume = " << volume;

    // Calculate and output cost
    cost = COST_PER_CUBIC_FOOT * volume;
    cout << ", Cost = " << cost;

    // Calculate and output charge to customer
    charge = CHARGE_PER_CUBIC_FOOT * volume;
    cout << ", Charge to customer = " << charge;

    profit = charge - cost;
    cout << ", Profit = " << profit;

return 0;
}