// Section 6
// Primitive Types

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {

    /*****************************
     *      Character Type
     * **************************/
    char lastInitial{'S'};
    cout << "My last Name Initial is : " << lastInitial << endl;

    /*****************************
     *      Integer Type
     * **************************/
    unsigned short int examScore{77}; // same as unsigned short examScore {77};
    // by default it's signed.
    cout << "My Exam Score is : " << examScore << endl;

    int countriesRepresented{65};
    cout << "There were " << countriesRepresented
         << " countries represented in my meeting." << endl;

    // long peopleInIndia{1,396,864,884}; //invalid
    long peopleInIndia{1'396'864'884}; // valid (' can be ignored but improves
    // readability) -- c++14 Feature
    cout << "There are about " << peopleInIndia << " people in India." << endl;

    // long peopleOnEarth {7'800'000'000}; // may not run with long and can
    // overflow then use long long (depends on compiler and other factors)
    long long peopleOnEarth{7'800'000'000};
    cout << "There are about " << peopleOnEarth << " people on Earth." << endl;

    long long distanceToAlphaCentauri{
        9'461'000'000'000}; // may run also with long depends on compiler and
    // architecture.
    cout << "The distance to alpha centauri is : " << distanceToAlphaCentauri
         << " km" << endl;

    /*****************************
     *   Floating point types
     * **************************/
    float carPayment{401.23};
    cout << "My car payment is " << carPayment << endl;

    double pi{3.14159};
    cout << "PI is approx. " << pi << endl;

    long double largeAmount{2.7e120}; // 2.7*10^120
    cout << "Large amount is : " << largeAmount << endl;

    /*****************************
     *      Boolean Type
     * **************************/
    bool gameOver{false};
    cout << "The value of gameover is :" << gameOver << endl; // will output 0

    /*****************************
     *      Overflow Example
     * **************************/
    short value1{30000};
    short value2{1000};
    short sum{value1 + value2};
    short product{value1 * value2}; // this will overflow (-15488 in this case).

    cout << "The sum and product of " << value1 << " and " << value2
         << " is : " << sum << " and " << product << endl;
    return 0;
}

// C++ 11 list initialization syntax gives helpful warning messages (at
// compile time or maybe also your IDE is smart like neovim with lsp in my case)
//
// 03-primitive_data_types.cpp: In function ‘int main()’:
// 03-primitive_data_types.cpp:65:23: warning: narrowing conversion of
// ‘(((int)value1) + ((int)value2))’ from ‘int’ to ‘short int’ [-Wnarrowing]
//    65 |     short sum {value1 + value2};
//       |                ~~~~~~~^~~~~~~~
// 03-primitive_data_types.cpp:66:27: warning: narrowing conversion of
// ‘(((int)value1) * ((int)value2))’ from ‘int’ to ‘short int’ [-Wnarrowing]
//    66 |     short product {value1 * value2};        // this will overflow
//    (-15488 in this case).
//       |                    ~~~~~~~^~~~~~~~

// output
//
// My last Name Initial is : S
// My Exam Score is : 77
// There were 65 countries represented in my meeting.
// There are about 1396864884 people in India.
// There are about 7800000000 people on Earth.
// The distance to alpha centauri is : 9461000000000 km
// My car payment is 401.23
// PI is approx. 3.14159
// Large amount is : 2.7e+120
// The value of gameover is :0
// The sum and product of 30000 and 1000 is : 31000 and -15488
