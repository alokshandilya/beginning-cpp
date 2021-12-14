// Section 6 - Challenge
// declared constants

/*******************************************
 
 * Alok's Carpet Cleaning Service
 * Charges:
 *    $25 per small room
 *    $35 per large room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days

 * Prompt the user for the number of small and large rooms
 * they would like cleaned and provide an estimate such as :

 * Estimate for carpet cleaning service:
 * Number of small rooms : 3
 * Number of large rooms : 1
 * Price per small room : $25
 * Price per large room : $35
 * Cost : $110
 * Tax : $6.6
 * ====================================
 * Total Estimate : $116.6
 * This estimate is valid for 30 days.

*******************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    const float chargePerSmallRoom{25};
    const float chargePerLargeRoom{35};
    const float salesTax{0.06};
    const int estimateDays{30};

    cout << "Alok's Carpet Cleaning Service" << endl;
    cout << "Charges :\n\t$" << chargePerSmallRoom << " per small room\n\t$"
         << chargePerLargeRoom << " per large room" << endl;

    cout << "Sales tax is " << salesTax << "%" << endl;
    cout << "Estimates are valid for " << estimateDays << " days" << endl;

    int numberOfSmallRooms{0};
    int numberOfLargeRooms{0};
    cout << "Enter the number of small and large rooms you would like to be "
            "cleaned"
         << endl;
    cin >> numberOfSmallRooms >> numberOfLargeRooms;

    cout << "Estimate for carpet cleaning service :" << endl;
    cout << "Number of small rooms : " << numberOfSmallRooms << endl;
    cout << "Number of large rooms : " << numberOfLargeRooms << endl;
    cout << "Price per small room : " << chargePerSmallRoom << endl;
    cout << "Price per large room : " << chargePerLargeRoom << endl;

    float cost{(chargePerSmallRoom * numberOfSmallRooms) +
               (chargePerLargeRoom * numberOfLargeRooms)};

    cout << "Cost : $" << cost << endl;
    float tax{salesTax * cost};
    cout << "Tax : $" << tax << endl;

    float totalEstimate{cost + tax};
    cout << "=========================================" << endl;
    cout << "Total Estimate : $" << totalEstimate << endl;
    cout << "This estimate is valid for " << estimateDays << " days." << endl;
    return 0;
}

// output
//
// Alok's Carpet Cleaning Service
// Charges :
//         $25 per small room
//         $35 per large room
// Sales tax is 0.06%
// Estimates are valid for 30 days
// Enter the number of small and large rooms you would like to be cleaned
// 7 8
// Estimate for carpet cleaning service :
// Number of small rooms : 7
// Number of large rooms : 8
// Price per small room : 25
// Price per large room : 35
// Cost : $455
// Tax : $27.3
// =========================================
// Total Estimate : $482.3
// This estimate is valid for 30 days.
