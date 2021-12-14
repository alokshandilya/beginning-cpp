#include <iostream>
using std::cout;
using std::endl;

int myAge{21}; // global variable

int main() {
    cout << myAge << endl; // will use global variable
    int myAge{22};         // local variable
    cout << myAge << endl;
    // local variable overriding global because compiler looks locally first
    myAge = 23; // assignment operator
    cout << myAge << endl;
    return 0;
}

// output
//
// 21
// 22
// 23
