// Section 4 Challenge
// =============
// Create a C++ program that asks the user for their favorite number between 1
// and 100 then read this number from the console. Suppose the user enters 24.
// Then display the following to the console:
//
// Amazing!! That's my favorite number too!
// No really!!, 24 is my favorite number!
//
// Below are 2 sample runs of the program:
// =======================================
// Enter you favorite number betweek 1 and 100 : 34
// Amazing!! That's my favorite number too!
// No really!!, 34 is my favorite number!
//
// Enter your favorite number between 1 and 100 : 75
// Amazing!! That's my favorite number too!
// No really!!, 75 is my favorite number!

#include <iostream>
// Qualified using namespace is better for handling namespace conflict.
// but using namespace std is easier for smaller programs.
using std::cin;
using std::cout;
using std::endl;

int main() {
  cout << "Enter you favorite number between 1 and 100 : " << endl;
  int favoriteNumber;
  cin >> favoriteNumber;
  cout << "Amazing!! That's my favorite number too!" << endl;
  cout << "No really!!, " << favoriteNumber << " is my favorite number!"
       << endl;
  return 0;
}
