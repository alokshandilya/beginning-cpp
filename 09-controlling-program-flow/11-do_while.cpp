// Section 9
// Do-while
// Simple Menu Example

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    char selection{};
    do {
        cout << "\n---------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;
        // we could use switch too
        if (selection == '1')
            cout << "You chose 1 - doing this" << endl;
        else if (selection == '2')
            cout << "You chose 2 - doing that" << endl;
        else if (selection == '3')
            cout << "You chose 3 - doing something else" << endl;
        else if (selection == 'Q' || selection == 'q')
            cout << "Goodbye..." << endl;
        else
            cout << "Unknown option -- try again..." << endl;
    } while (selection != 'q' && selection != 'Q');
    // we could also use ->
    // while ( ! (selection == 'q' || selection == 'Q');
    // [Reminds DEMORGANS'S LAW]
    // If the loop condition uses || instead of && in line 30, then,
    // If the selection is not equal to 'q' then the while condition will be
    // true & the second part will not be evaluated. So we continue to loop. if
    // the selection is equal to 'q' then the first part of the condition fails,
    // so the second part will be evaluated and it will be true.So the entire
    // condition evaluates to true and we continue looping.cout << endl;
    return 0;
}

// output
//
// ---------------------
// 1. Do this
// 2. Do that
// 3. Do something else
// Q. Quit
//
// Enter your selection: 3
// You chose 3 - doing something else
//
// ---------------------
// 1. Do this
// 2. Do that
// 3. Do something else
// Q. Quit
//
// Enter your selection: 1
// You chose 1 - doing this
//
// ---------------------
// 1. Do this
// 2. Do that
// 3. Do something else
// Q. Quit
//
// Enter your selection: q
// Goodbye...
