/**************************************************************
 *      Quick introduction to expressions and statements
 *      a + b is an expression and a + b; is a statement.
 *      [More in NOTES]
 * ***********************************************************/

// Section 8
// Assignment operator (=)

#include <iostream>
using std::cout;
using std::endl;

int main() {
    int myNum1{10}; // initialisation not assignment
    int myNum2{20};
    myNum1 = 100; // assignment
    cout << "The value of number 1 is : " << myNum1 << endl; // outputs 100
    cout << "The value of number 2 is : " << myNum2 << endl; // outputs 20
    myNum2 = myNum1;
    cout << "The updated value of number 2 is : " << myNum2
         << endl; // outputs 100

    myNum1 = myNum2 = 1000; // right to left
    cout << "The new value of num 1 is : " << myNum1
         << " and num 2 is : " << myNum2 << endl;
    // When we use literals, like 10, 20, and 10,000, these are always r-values.
    // When we use a variable name, if we use it on the left-hand side of an
    // assignment operator then we use the l-value, and if we use it on the
    // right-hand side of an assignment operator then we use the r-value.
    // an lvalue is an object reference and a rvalue is a value.
    // An lvalue is an expression that yields an object reference, such as a
    // variable name, an array subscript reference, a dereferenced pointer, or a
    // function call that returns a reference. An lvalue always has a defined
    // region of storage, so you can take its address.

    // 100 = myNum1;
    // shows error because 100 is a literal and doesn't have a lvalue(location
    // in memory). 01-assignment_operator.cpp: In function ‘int main()’:
    // 01-assignment_operator.cpp:37:3: error: lvalue required as left operand
    // of assignment
    //  37 |   100 = myNum1;
    //     |   ^~~

    // myNum1 = "Alok";
    // error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]

    const int c{77};
    // c = 78;                  // error: assignment of read-only variable ‘c’
    cout << c << endl;

    return 0;
}

// output
//
// The value of number 1 is : 100
// The value of number 2 is : 20
// The updated value of number 2 is : 100
// The new value of num 1 is : 1000 and num 2 is : 1000
// 77
