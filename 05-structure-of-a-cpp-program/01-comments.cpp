// Section 5
// Comments

/*****************************************************
 * author Alok
 *
 * 17/10/2021  Alok - fixed bug in ...
 * 22/10/2021  Aryan - Added function to...
 *
 ****************************************************/

#include <iostream>
// This is a comment

/* This is a multiple
   line
   comment
*/

// Good Comment Example like.....
// Using a modified version(explaining what you changed briefly) Dijkstra's
// algorithm to improve space efficiency

int main() {
    int favorite_number;
    std::cout << "Enter your favorite number between 1 and 100 : ";
    std::cin >> favorite_number;
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!!, " << favorite_number << " is my favorite number!"
              << std::endl;
    return 0;
}

// output
//
// Enter your favorite number between 1 and 100 : 7
// Amazing!! That's my favorite number too!
// No really!!, 7 is my favorite number!
