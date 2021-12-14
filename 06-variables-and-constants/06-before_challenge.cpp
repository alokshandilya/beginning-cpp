// literal constants...

/********************************************************
 *  Alok's Carpet Cleaning Service
 *  Charges $30 per room
 *  Sales tax is 6%
 *  Estimates are valid for 30 days
 *
    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:
 *
 *  Estimate of carpet cleaning service :
 *  Number of rooms : 2
 *  Price per room : $30
 *  Cost : $60
 *  Tax : $3.6
 *  =====================================
 *  Total estimate : $63.6
 *  This estimate is valid for 30 days.

Pseudocode :
    Prompt the user to enter the number of rooms
    Display number of rooms
    Display price per room

    Display cost : (number of rooms * price per room)
    Display tax : number of rooms * price per room * tax rate
    Display total estimate : (number of rooms * price per room) + (number of
rooms * price per room * tax rate) Display estimate expiration time
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    const float pricePerRoom{30};
    const float salesTaxPercent{6.0 / 100.0};
    // directly as percent. remember {6/100} will act as int and it will
    // truncate to 0.

    // or
    // const float salesTaxPercent {0.06};
    const int estimateExpiry{30}; // days
    cout << "Alok's Carpet Cleaning Service\nCharges $30 per room\nSales tax "
            "is 6%"
         << endl;
    cout << "Estimates are valid for 30 days" << endl << endl;

    int numberOfRooms{0};
    cout << "Enter the number of rooms you would like cleaned." << endl;
    cin >> numberOfRooms;

    cout << "\n==============================================\n" << endl;
    cout << "Estimate of carpet cleaning service :" << endl;
    cout << "Number of rooms : " << numberOfRooms << endl;
    cout << "Price per room : $" << pricePerRoom << endl;

    float cost{pricePerRoom * numberOfRooms};
    cout << "Cost : $" << cost << endl;

    float salesTax = (cost * salesTaxPercent);
    cout << "Tax : $" << salesTax << endl;

    cout << "\n==============================================\n" << endl;

    float totalEstimate{cost + salesTax};
    cout << "Total estimate : $" << totalEstimate << endl;
    cout << "This estimate is valid for " << estimateExpiry << " days." << endl;

    return 0;
}

// output
//
// Alok's Carpet Cleaning Service
// Charges $30 per room
// Sales tax is 6%
// Estimates are valid for 30 days
//
// Enter the number of rooms you would like cleaned.
// 7
//
// ==============================================
//
// Estimate of carpet cleaning service :
// Number of rooms : 7
// Price per room : $30
// Cost : $210
// Tax : $12.6
//
// ==============================================
//
// Total estimate : $222.6
// This estimate is valid for 30 days.
