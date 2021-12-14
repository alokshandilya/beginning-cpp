// Section 11
// Arrays and functions

#include <iostream>
using namespace std;

// prototype
void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

// definition
void print_array(const int arr[], size_t size) { // const
    for (size_t i{0}; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
    // arr[0] = 50000; // bug [hence used const] because we would want that
    // print_array function does not modify our program in any way, it only
    // prints.
}

// set each array element to value
void set_array(int arr[], size_t size, int value) {
    for (size_t i{0}; i < size; ++i)
        arr[i] = value;
}

int main() {
    int my_scores[]{100, 98, 90, 86, 84};
    // pass by value of location of my_scores (where 100 is stored).
    // as location of array is passed -> the function can modify the actual
    // array. const can be used so, we get compiler error and can debug it.
    print_array(my_scores, 5); // 100 98 90 86 84
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5); // 100 100 100 100 100
    print_array(my_scores, 5); // 100 100 100 100 100

    cout << endl;
    return 0;
}

// output
//
// 100 98 90 86 84
// 100 100 100 100 100
// 100 100 100 100 100
