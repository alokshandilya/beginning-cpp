#include <cstdlib> // required for rand()
#include <ctime>   // required for time()
#include <iostream>

using std::cout;
using std::endl;

int main() {
    int random_number{};
    size_t count{10}; // number of random numbers to generate
    int min{1};       // lower bound (inclusive)
    int max{6};       // upper bound (inclusive)

    // seed the random number generator. If you don't seed the generator you
    // will get the same sequence random numbers on every run
    cout << "RAND_MAX on my system is : " << RAND_MAX << endl;
    srand(time(nullptr)); // seeds to system time

    for (size_t i{1}; i <= count; ++i) {
        random_number =
            rand() % max + min; // generate a random number [min, max]
        cout << random_number << endl;
    }
    cout << endl;
    return 0;
}

// output
//
// RAND_MAX on my system is : 2147483647
// 3
// 5
// 2
// 5
// 3
// 1
// 1
// 3
// 5
// 6
