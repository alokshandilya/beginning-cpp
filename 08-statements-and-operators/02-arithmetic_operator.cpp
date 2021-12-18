// Section 8
// Arithmetic operators
/*
    +   addition
    -   subtraction
    *   multiplication
    /   division
    %   modulo or remainder  (works only with integers)

    +, -. * and /  operators are overloaded to work with multiple types such as
   int, double, etc. [% only for integer types]
*/

#include <iostream>
using std::cout;
using std::endl;

int main() {
    int myNumber1{200};
    int myNumber2{100};
    // following line outputs : 200 + 100 = 300
    cout << myNumber1 << " + " << myNumber2 << " = " << myNumber1 + myNumber2
         << endl;
    int myResult{0};
    myResult = myNumber1 + myNumber2;
    cout << myNumber1 << " + " << myNumber2 << " = " << myResult << endl;
    myResult = myNumber1 - myNumber2;
    cout << myNumber1 << " - " << myNumber2 << " = " << myResult << endl;
    myResult = myNumber1 * myNumber2;
    cout << myNumber1 << " * " << myNumber2 << " = " << myResult << endl;
    myResult = myNumber1 / myNumber2;
    cout << myNumber1 << " / " << myNumber2 << " = " << myResult << endl;
    myResult = myNumber2 / myNumber1;
    cout << myNumber2 << " / " << myNumber1 << " = " << myResult
         << endl; // outputs 0 as for int 100/200 = 0.5 (being int it gets
    // truncated i.e cut short)
    myResult = myNumber1 % myNumber2;
    cout << myNumber1 << " % " << myNumber2 << " = " << myResult
         << endl; // 200 % 100 = 0 (remainder when 200 is divided by 100)
    myNumber1 = 10;
    myNumber2 = 3;
    myResult = myNumber1 % myNumber2;
    cout << myNumber1 << " % " << myNumber2 << " = " << myResult << endl; // 1
    cout << 5 / 10 << endl; // here 5 and 10 will by default will be treated as
    // ints so output will be 0 (0.5 truncated)
    cout << 5.0 / 10.0 << endl; // here the output will be 0.5
    cout << endl;

    // float f1 {77.7};
    // float f2 {66.7};
    // float floatModulo {f1 % f2};

    // error: invalid operands of types
    // ‘float’ and ‘float’ to binary ‘operator%’ cout << floatModulo << endl; //
    // for % (expression must have integral or unscoped enum type)
    myResult = myNumber1 * 10 + myNumber2;
    cout << myResult << endl; // outputs 103
    myResult = myNumber1 * (10 + myNumber2);
    cout << myResult
         << endl; // outputs 130 (so be aware of operator precedence...)

    return 0;
}

// output
//
// 200 + 100 = 300
// 200 + 100 = 300
// 200 - 100 = 100
// 200 * 100 = 20000
// 200 / 100 = 2
// 100 / 200 = 0
// 200 % 100 = 0
// 10 % 3 = 1
// 0
// 0.5
//
// 103
// 130
