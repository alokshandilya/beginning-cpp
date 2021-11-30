// Section 9
// Switch with enumeration

#include <iostream>
using std::cout;
using std::endl;

int main() {
  enum Direction {
    left, right, up, down 
  };
  Direction heading{left};
  switch (heading) {
  case left:
    cout << "Going left" << endl;
    break;
  case right:
    cout << "Going right" << endl;
    break;
  default:
    // if we dont handle all enums or use default, some compilers may generate a
    // warning that up, down enum are not handled.
    cout << "OK" << endl;
  }
  cout << endl;
  return 0;
}

// output 
//
// Going left
