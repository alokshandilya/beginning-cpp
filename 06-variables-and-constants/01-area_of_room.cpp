// Section 6
// Declaring and initializing variables

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// This program will calculate the area of a room in square feet
int main() {
  cout << "*********  This program calculates the area of the room  *********"
       << endl
       << endl;
  //  float lengthOfRoom = 0;     // This is C-like initialization
  //  float lengthOfRoom (0);     // Constructor initialization
  float lengthOfRoom{0}; // This is C++11 list initialization syntax
                         // (recommended way coz has some benefits)
                         // (see output of 03-primitive_data_types.cpp)
  float widthOfRoom{0};  // breadth of room
  cout << "Enter the length and breadth of the room in feet." << endl;
  cin >> lengthOfRoom >> widthOfRoom;
  float areaOfRoom{0};
  areaOfRoom = lengthOfRoom * widthOfRoom;
  cout << "*********  The Area of the Room is : " << areaOfRoom
       << " square feet  **********" << endl;
  return 0;
}
