#include <iostream>

int main() {
  std::cout << ("Hello!! World" / 125) << std::endl;
  return 0;
}

// Error Displayed :
//
// error: invalid operands of types ‘const char [14]’ and ‘int’ to binary
// ‘operator/’ 4 |   std::cout << ("Hello!! World" / 125) << std::endl;
//   |                 ~~~~~~~~~~~~~~~ ^ ~~~
//   |                 |                 |
//   |                 const char [14]   int
