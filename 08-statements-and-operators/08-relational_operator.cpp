// Section 8
// Relational Operators

#include <iostream>
using std::boolalpha;
using std::cin;
using std::cout;
using std::endl;

int main() {
    int num1{}, num2{};

    cout << boolalpha;
    cout << "Enter 2 integers separated by a space: ";
    cin >> num1 >> num2;
    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
    // (num1 > num2) will produce boolean value true/false
    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;

    const int lower{10};
    const int upper{20};

    cout << "\nEnter an integer that is greater than " << lower << " : ";
    cin >> num1;
    cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;
    cout << "\nEnter an integer that is less than or equal to " << upper
         << " : ";
    cin >> num1;
    cout << num1 << " <= " << upper << " is " << (num1 <= upper) << endl;
    cout << endl;

    return 0;
}

// output
//
// Enter 2 integers separated by a space: 89 87
// 89 > 87 : true
// 89 >= 87 : true
// 89 < 87 : false
// 89 <= 87 : false
//
// Enter an integer that is greater than 10 : 77
// 77 > 10 is true
//
// Enter an integer that is less than or equal to 20 : 20
// 20 <= 20 is true
