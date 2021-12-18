// Section 5
// Basic I/O using cin and cout

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << "Hello world!";
    cout << "Hello";
    cout << "World" << endl;
    cout << "Hello"
         << " world!" << endl;
    cout << "Hello"
         << " world!\n";
    cout << "Hello\nOut\nThere\n";

    int num1;
    int num2;
    double num3;
    cout << "Enter an integer : ";
    cin >> num1;
    cout << "You entered : " << num1 << endl;
    cout << "Enter a first integer : ";
    cin >> num1;
    cout << "Enter a second integer : ";
    cin >> num2;
    cout << "You entered " << num1 << " and " << num2 << endl;
    cout << "Enter 2 integers separated with a space : ";
    cin >> num1 >> num2;
    cout << "You entered " << num1 << " and " << num2 << endl;
    cout << "Enter a double : ";
    cin >> num3;
    cout << "You entered : " << num3 << endl;
    cout << "Enter an integer : ";
    cin >> num1;
    cout << "Enter a double : ";
    cin >> num3;
    cout << "The integer is : " << num1 << endl;
    cout << "And the double is " << num3 << endl;
    return 0;
}

// output
//
// Hello world!HelloWorld
// Hello world!
// Hello world!
// Hello
// Out
// There
// Enter an integer : 7
// You entered : 7
// Enter a first integer : 77
// Enter a second integer : 777
// You entered 77 and 777
// Enter 2 integers separated with a space : 78 79
// You entered 78 and 79
// Enter a double : 77.77
// You entered : 77.77
// Enter an integer : 17
// Enter a double : 77.78
// The integer is : 17
// And the double is 77.78
