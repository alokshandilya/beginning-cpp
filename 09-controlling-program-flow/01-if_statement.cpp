// Section 9
// If Statement

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    int num{};
    const int min{10};
    const int max{100};
    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;
    if (num >= min) {
        cout << "\n=========== If statement 1 =============" << endl;
        cout << num << " is greater than or equal to " << min << endl;
        // cout << diff;     // error (undefined diff)
        int diff{num - min}; // diff can be used inside this if block after this
        // statement only (local variable.)
        cout << num << " is " << diff << " greater than " << min << endl;
    }
    // cout << diff; // error (undefined diff)
    if (num <= max) {
        cout << "\n=========== If statement 2=============" << endl;
        cout << num << " is less than or equal to " << max << endl;
        int diff{max - num}; // local
        cout << num << " is " << diff << " less than " << max << endl;
    }
    if (num >= min && num <= max) {
        cout << "\n=========== If statement 3=============" << endl;
        cout << num << " is in range " << endl;
        cout << "This means statements 1 and 2 must also display!!" << endl;
    }
    if (num == min || num == max) {
        cout << "\n=========== If statement 4 =============" << endl;
        cout << num << " is right on a boundary " << endl;
        cout << "This means all 4 statements display " << endl;
    }
    cout << endl;
    return 0;
}

// output
//
// Enter a number between 10 and 100: 77
//
// =========== If statement 1 =============
// 77 is greater than or equal to 10
// 77 is 67 greater than 10
//
// =========== If statement 2=============
// 77 is less than or equal to 100
// 77 is 23 less than 100
//
// =========== If statement 3=============
// 77 is in range
// This means statements 1 and 2 must also display!!
