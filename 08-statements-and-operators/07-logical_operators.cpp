// Section 8
// Logical Operators

#include <iostream>
using std::boolalpha;
using std::cin;
using std::cout;
using std::endl;

int main() {
  int num{};
  const int lower{10};
  const int upper{20};

  cout << boolalpha;
  // Determine if an entered integer is between two other integers
  // assume lower < upper
  cout << "Enter an integer - the bounds are " << lower << " and " << upper
       << " : ";
  cin >> num;

  bool within_bounds{false};
  within_bounds = (num > lower && num < upper);
  cout << num << " is between " << lower << " and " << upper << " : "
       << within_bounds << endl;
  // Determine if an entered integer is outside two other integers
  // assume lower < upper
  cout << "\nEnter an integer - the bounds are " << lower << " and " << upper
       << " : ";
  cin >> num;

  bool outside_bounds{false};
  outside_bounds = (num < lower || num > upper);
  cout << num << " is outside " << lower << " and " << upper << " : "
       << outside_bounds << endl;
  // Determine if an entered integer is exactly on the boundary
  // assume lower < upper
  cout << "\nEnter an integer - the bounds are " << lower << " and " << upper
       << " : ";
  cin >> num;

  bool on_bounds{false};
  on_bounds = (num == lower || num == upper);
  cout << num << " is on one of the bounds which are " << lower << " and "
       << upper << " : " << on_bounds << endl;
  // Determine if you need to wear a coat based on temperature and wind speed
  bool wear_coat{false};
  double temperature{};
  int wind_speed{};

  const int wind_speed_for_coat{40}; // wind over this value requires a coat
  const double temperature_for_coat{7.2};
  // temperature below this value requires a coat

  // Require a coat if either wind is too high OR temperature is too low
  cout << "\nEnter the current temperature in (C) : ";
  cin >> temperature;
  cout << "Enter windspeed in (kph) : ";
  cin >> wind_speed;

  wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
  cout << "Do you need to wear a coat using OR? " << wear_coat << endl;

  // Require a coat if BOTH the windspeed is too high AND temperature is too low
  wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
  cout << "Do you need to wear a coat using AND? " << wear_coat << endl;

  cout << endl;
  return 0;
}

// output
//
// Enter an integer - the bounds are 10 and 20 : 15
// 15 is between 10 and 20 : true
// 
// Enter an integer - the bounds are 10 and 20 : 20
// 20 is outside 10 and 20 : false
// 
// Enter an integer - the bounds are 10 and 20 : 100
// 100 is on one of the bounds which are 10 and 20 : false
//
// Enter the current temperature in (C) : 7
// Enter windspeed in (kph) : 45
// Do you need to wear a coat using OR? true
// Do you need to wear a coat using AND? true
