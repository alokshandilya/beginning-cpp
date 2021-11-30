// Section 9
// While Loop

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int num{};
  cout << "Enter a positive integer - start the countdown : ";
  cin >> num;
  while (num > 0) {
    cout << num << endl;
    --num;
  }
  cout << "Blastoff!" << endl;

  int num1{};
  cout << "Enter a positive integer to count up to : ";
  cin >> num1;
  int i{1};
  while (num1 >= i) {
    cout << i << endl;
    i++;
  }

  int number{};
  cout << "Enter an integer less than 100 : ";
  cin >> number;
  while (number >= 100) { // !(number < 100)
    cout << "Enter an integer less than 100 : ";
    cin >> number;
  }
  cout << "Thanks" << endl;

  // better approach as we don't have to use cout << "Enter an interger..."
  // twice in this case. Even better with do-while loop.
  bool done{false};
  int number1{0};
  while (!done) {
    cout << "Enter an integer between 1 and 5 : ";
    cin >> number1;
    if (number1 <= 1 || number1 >= 5)
      cout << "Out of range, try again" << endl;
    else {
      cout << "Thanks!" << endl;
      done = true; // Important for loop exit check line 39, 41
    }
  }
  cout << endl;
  return 0;
}

// SAMPLE RUN :
//
// Enter a positive integer - start the countdown : 8
// 8
// 7
// 6
// 5
// 4
// 3
// 2
// 1
// Blastoff!
// Enter a positive integer to count up to : 5
// 1
// 2
// 3
// 4
// 5
// Enter an integer less than 100 : 2
// Thanks
// Enter an integer between 1 and 5 : 4
// Thanks!
