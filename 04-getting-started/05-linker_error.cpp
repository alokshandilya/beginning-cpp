#include <iostream>

extern int x;
// When we define a variable as extern , we tell the compiler to assume the
// variable bas been defined somewhere else and let the linker worry about
// finding it.

int main() {
  std::cout << "Hello!! World" << std::endl;
  std::cout << x;
  return 0;
}

// error (Linker error)
//
// 5-linkerErrors.cpp:(.text+0x31): undefined reference to `x'
