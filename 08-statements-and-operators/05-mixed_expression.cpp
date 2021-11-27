// Section 8
// Mixed Type Expressions
/*
    Ask the user to enter 3 integers
    Calculate the sum of the integers then
    calculate the average of the 3 integers.

    Display the 3 integers entered
    the sum of the 3 integers and
    the average of the 3 integers.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int total{}; // same as total {0}; remember total is int...
  int num1{}, num2{}, num3{};
  const int count{3};
  cout << "Enter " << count << " integers separated by spaces: ";
  cin >> num1 >> num2 >> num3;

  total = num1 + num2 + num3;
  double average{0.0};
  // average = static_cast<double>(total / count); // loss of precision already
  average = static_cast<double>(total) / count; // recommended casting method.
  // average = (double)total/count;
  // Old-C-Style casting it just casts.... static_cast<dataType> double-checks
  // if it can be casted and then casts.
  cout << "The " << count << " numbers were: " << num1 << "," << num2 << ","
       << num3 << endl;
  cout << "The sum of the numbers is: " << total << endl;
  cout << "The average of the numbers is: " << average << endl;
  cout << endl;

  return 0;
}

// output
//
// Enter 3 integers separated by spaces: 7 8 9
// The 3 numbers were: 7,8,9
// The sum of the numbers is: 24
// The average of the numbers is: 8
