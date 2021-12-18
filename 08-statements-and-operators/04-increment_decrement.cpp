// Section 8
/*
    Increment operator ++
    Decrement operator --

    Increments or decrements its operand by 1
    Can be used with integers, floating point types and pointers

    Prefix       ++num
    Postfix      num++

    Don't overuse this operator!
    ALERT!!! Never use it twice for the same variable in the same statement!!
*/

#include <iostream>
using std::cout;
using std::endl;

int main() {
    int counter{10};
    int result{0};

    // Example 1 - simple increment
    cout << "Counter : " << counter << endl; // outputs 10
    counter = counter + 1;
    cout << "Counter : " << counter << endl; // outputs 11
    counter++;
    cout << "Counter : " << counter << endl; // outputs 12
    ++counter;
    cout << "Counter : " << counter << endl; // outputs 13

    // Example 2 - preincrement
    cout << "==============================================" << endl;
    counter = 10;
    result = 0;
    cout << "Counter : " << counter << endl; // outputs 10
    result = ++counter; // Note the pre increment.. first value is increased by
    // 1 and then it binds to result hence , it will store 11.
    // this is same as -> counter = counter + 1; result = counter;
    cout << "Counter : " << counter << endl; // outputs 11
    cout << "Result : " << result << endl;   // outputs 11

    // Example 3 - post-increment
    cout << "==============================================" << endl;
    counter = 10;
    result = 0;
    cout << "Counter : " << counter << endl; // outputs 10
    result = counter++; // Note the post increment.. first counter value 10
    // binds to results and then counter becomes 11 this is
    // same as -> result = counter; counter = counter + 1;
    cout << "Counter : " << counter << endl; // outputs 11
    cout << "Result : " << result << endl;   // outputs 10

    // Example 4
    cout << "==============================================" << endl;
    counter = 10;
    result = 0;
    cout << "Counter : " << counter << endl; // outputs 10
    result = ++counter + 10; // Note the pre increment..
    // so counter becomes 11 and
    // + 10 makes it 21 and results gets binded to 21
    // this is same as ->
    // counter = counter +1;
    // result = counter +10;
    cout << "Counter : " << counter << endl; // output 11
    cout << "Result : " << result << endl;   // output 21

    // Example 5
    cout << "==============================================" << endl;
    counter = 10;
    result = 0;
    cout << "Counter : " << counter << endl; // outputs 10
    result = counter++ + 10; // Note the post increment.. so counter(10) + 10 ..
    // so 20 is binded to result and counter becomes 11
    // this is same is ->
    // result = counter + 10;
    // counter = counter + 1;
    cout << "Counter : " << counter << endl; // outputs 11
    cout << "Result : " << result << endl;   // outputs 20
    cout << endl;

    return 0;
}

// output
//
// Counter : 10
// Counter : 11
// Counter : 12
// Counter : 13
// ==============================================
// Counter : 10
// Counter : 11
// Result : 11
// ==============================================
// Counter : 10
// Counter : 11
// Result : 10
// ==============================================
// Counter : 10
// Counter : 11
// Result : 21
// ==============================================
// Counter : 10
// Counter : 11
// Result : 20
