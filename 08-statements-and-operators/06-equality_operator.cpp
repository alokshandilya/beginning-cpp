#include <iostream>

using std::boolalpha; // displays true/false instead of 1/0 when used with cout.
using std::cin;
using std::cout;
using std::endl;
// using std::noboolalpha;        
// cout << noboolalpha brings back the default 1/0 instead of -> true/false

int main() {
  bool equal_result{false};
  bool not_equal_result{false};
  int num1{}, num2{};

  cout << boolalpha;   // will display true/false instead of 1/0 for booleans
  // cout << noboolalpha; // will again display default 1/0 instead of
  // true/false for booleans
  cout << "Enter two integers separated by a space: ";
  cin >> num1 >> num2;
  equal_result = (num1 == num2);     // false if ex. 5 and 4 and true if 5 and 5
  not_equal_result = (num1 != num2); // reverse of previous
  cout << "Comparision result (equals) : " << equal_result << endl;
  cout << "Comparision result (not equals) : " << not_equal_result << endl;

  char char1{}, char2{};
  cout << "Enter two characters separated by a space: ";
  cin >> char1 >> char2;
  equal_result = (char1 == char2);
  not_equal_result = (char1 != char2);
  cout << "Comparision result (equals) : " << equal_result << endl;
  cout << "Comparision result (not equals) : " << not_equal_result << endl;

  double double1{}, double2{};
  cout << "Enter two doubles separated by a space: ";
  cin >> double1 >> double2;
  equal_result = (double1 == double2);
  not_equal_result = (double1 != double2);
  cout << "Comparision result (equals) : " << equal_result << endl;
  cout << "Comparision result (not equals) : " << not_equal_result << endl;
  // Remember that something like 12 and 11.9999999999999999999999999 will show
  // equal if we want very high precision we use special libraries for that
  // purpose.

  cout << "Enter an integer and a double separated by a space: ";
  cin >> num1 >> double1;
  equal_result =
      (num1 == double1); 
  // mixed mode -- int will be float and it will be compared..
  not_equal_result = (num1 != double1); 
  // hence , 10(int) and 10.0(double) will be equal.
  cout << "Comparision result (equals) : " << equal_result << endl;
  cout << "Comparision result (not equals) : " << not_equal_result << endl;

  cout << endl;
  return 0;
}

// output
//
// Enter two integers separated by a space: 87 78
// Comparision result (equals) : false
// Comparision result (not equals) : true
// Enter two characters separated by a space: A a
// Comparision result (equals) : false
// Comparision result (not equals) : true
// Enter two doubles separated by a space: 88.2 88.12
// Comparision result (equals) : false
// Comparision result (not equals) : true
// Enter an integer and a double separated by a space: 7 7.000000000000000000000000000000000000000001
// Comparision result (equals) : true
// Comparision result (not equals) : false
