#include <cfloat>  // make sure to include cfloat for floating types
#include <climits> // make sure to include climits for interger types
#include <iostream>
using std::cout;
using std::endl;

int main() {
    // Results can vary on different machines, compilers....etc....
    cout << "=====================================================" << endl;
    cout << " ***********  sizeof information  ************" << endl;
    cout << "=====================================================" << endl;
    cout << "char : " << sizeof(char) << " bytes" << endl;
    cout << "int : " << sizeof(int) << " bytes" << endl;
    cout << "unsigned int : " << sizeof(unsigned int) << " bytes" << endl;
    cout << "short : " << sizeof(short) << " bytes" << endl;
    cout << "long : " << sizeof(long) << " bytes" << endl;
    cout << "long long : " << sizeof(long long) << " bytes" << endl;
    cout << "=====================================================" << endl;
    cout << "float : " << sizeof(float) << " bytes" << endl;
    cout << "double : " << sizeof(double) << " bytes" << endl;
    cout << "long double : " << sizeof(long double) << " bytes"
         << endl; // mine machine shows 16 bytes, yours could be 12

    // use values defined in <climits>
    cout << "=====================================================" << endl;
    cout << "******  Maximum Values  *******" << endl;
    cout << "char : " << CHAR_MAX << endl;
    cout << "int : " << INT_MAX << endl;
    cout << "short : " << SHRT_MAX
         << endl; // notice it's SHRT_MAX and not SHORT_MAX
    cout << "long : " << LONG_MAX << endl;
    cout << "long long : " << LLONG_MAX
         << endl; // notice it's LLONG_MAX and not LONGLONG_MAX
    // LLONG_MAX and LONG_MAX displays same value in my current machine.

    /************************************************
     *  sizeof can also be used with variable name
     ***********************************************/
    cout << "=====================================================" << endl;
    cout << "*******  sizeof using variable names  *******" << endl;
    int age{21};
    cout << "The age is : " << sizeof(age) << " bytes " << endl;
    // or
    cout << "The age is : " << sizeof age << " bytes " << endl;

    double wage{22.24};
    cout << "wage is : " << sizeof(wage) << " bytes " << endl;
    // or
    cout << "wage is : " << sizeof wage << " bytes " << endl;

    return 0;
}

// output (in my machine) :
//
// =====================================================
//  ***********  sizeof information  ************
// =====================================================
// char : 1 bytes
// int : 4 bytes
// unsigned int : 4 bytes
// short : 2 bytes
// long : 8 bytes
// long long : 8 bytes
// =====================================================
// float : 4 bytes
// double : 8 bytes
// long double : 16 bytes
// =====================================================
// ******  Maximum Values  *******
// char : 127
// int : 2147483647
// short : 32767
// long : 9223372036854775807
// long long : 9223372036854775807
// =====================================================
// *******  sizeof using variable names  *******
// The age is : 4 bytes
// The age is : 4 bytes
// wage is : 8 bytes
// wage is : 8 bytes
