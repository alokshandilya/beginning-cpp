#include <iostream>
#define pi 3.1415926
// #define is like blind find and replace, used mostly in legacy C++
// as pre-processor doesn't know c++, it can't typecheck and this could lead to
// difficulty in finding errors.
using std::cout;
using std::endl;

int main() {
    const int myFavouriteNumber{7};
    // myFavouriteNumber = myFavouriteNumber + 1;
    // this will give error
    // assignment of read-only variable...
    cout << pi << endl;
    cout << myFavouriteNumber << endl;
    return 0;
}

// output
// 3.14159
// 7
