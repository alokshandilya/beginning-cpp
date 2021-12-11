// Section 11
// Function Overloading

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// prototype
void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

// definition
// be careful with default arguments in function overloading
void print(int num) {
  cout << "Printing int: " << num << endl;
}

void print(double num) {
  cout << "Printing double: " << num << endl;
}

void print(string s) {
  cout << "Printing string: " << s << endl;
}

void print(string s, string t) {
  cout << "Printing 2 strings: " << s << " and " << t << endl;
}

void print(vector<string> v) {
  cout << "Printing vector of strings: ";
  for (auto s : v)
    cout << s + " ";
  cout << endl;
}

// main
int main() {
  print(100); // int
  print('A'); // character is always promoted to int should print 65 ASCII ('A')

  print(123.5); // double
  print(123.3F); // Float is promoted to double

  print("C-style string"); // C-style string is converted to a C++ string

  string s{"C++ string"};
  print(s); // C++ string

  print("C-style string", s); // First argument is converted to a C++ string

  vector<string> three_stooges{"Larry", "Moe", "Curly"};
  print(three_stooges);

  cout << endl;
  return 0;
}

// output
//
// Printing int: 100
// Printing int: 65
// Printing double: 123.5
// Printing double: 123.3
// Printing string: C-style string
// Printing string: C++ string
// Printing 2 strings: C-style string and C++ string
// Printing vector of strings: Larry Moe Curly
