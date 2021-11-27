// Section 8
// Convert EUR to USD

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  const double usdPerEur{1.19};
  cout << "Welcome to the EUR to USD converter" << endl;
  cout << "Enter the value in EUR : ";
  double euros{0.0};
  double dollars{0.0};
  cin >> euros;
  dollars = euros * usdPerEur;
  cout << euros << " euros is equivalent to " << dollars << " dollars" << endl;
  return 0;
}

// output
//
// Welcome to the EUR to USD converter
// Enter the value in EUR : 75
// 75 euros is equivalent to 89.25 dollars
