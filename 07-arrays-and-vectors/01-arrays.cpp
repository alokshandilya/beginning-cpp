// Section 7
// Arrays

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    // no size in [] so, compiler will size it based on the initializer list,
    // here size will be 5 (from 0 to 4).
    cout << "\nThe first vowel is: " << vowels[0] << endl; // prints a
    cout << "The last vowel is: " << vowels[4] << endl;    // prints u

    // cin >> vowels[5];
    // out of bounds -> don't do this!! will crash or produce stack smashing
    // error, error can vary on different operating systems.

    double hiTemps[]{90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hiTemps[0]
         << endl; // will print 90.1
    hiTemps[0] = 100.7;
    // set the first element of 0 index in hi_temps to 100.7
    cout << "The first high temperature is now: " << hiTemps[0]
         << endl; // will print updated value 100.7

    // int testScores [5];
    // will produce junk -> garbage values if printed ....
    // you may get a couple of 0s at starting (dont depend on it blindly)

    // int testScores [5] {};
    // will initialize all 5 elements to 0 -- recommended

    // int testScores [5] {0};
    // will also initialize all 5 elements to 0

    // int testScores [5] {100};
    // will only initialize 1st element to 100 and rest 4 elements to 0

    // int testScores [5] {100,200};
    // will initialize 1st element to 100, 2nd to 200 and rest 3 elements to 0

    int testScores[]{100, 90, 80, 70, 60};

    cout << "\nFirst score at index 0: " << testScores[0] << endl;
    cout << "Second score at index 1: " << testScores[1] << endl;
    cout << "Third score at index 2: " << testScores[2] << endl;
    cout << "Fourth score at index 3: " << testScores[3] << endl;
    cout << "Fifth score at index 4: " << testScores[4] << endl;

    cout << "\nEnter 5 test scores: ";
    cin >> testScores[0];
    cin >> testScores[1];
    cin >> testScores[2];
    cin >> testScores[3];
    cin >> testScores[4];

    // elements of array updated after previous cin.
    cout << "\nThe updated array is: " << endl;
    cout << "First score at index 0: " << testScores[0] << endl;
    cout << "Second score at index 1: " << testScores[1] << endl;
    cout << "Third score at index 2: " << testScores[2] << endl;
    cout << "Fourth score at index 3: " << testScores[3] << endl;
    cout << "Fifth score at index 4: " << testScores[4] << endl;

    cout << "\nNotice what the value of the array name is : " << testScores
         << endl; // this will give a hexadecimal value which is actually
                  // the address of the array.
                  // So remember outputting array without index
                  // will output the location of 1st element of the array.
                  // name of the array is the location of the array.

    cout << endl;
    return 0;
}

// output
//
// The first vowel is: a
// The last vowel is: u
//
// The first high temperature is: 90.1
// The first high temperature is now: 100.7
//
// First score at index 0: 100
// Second score at index 1: 90
// Third score at index 2: 80
// Fourth score at index 3: 70
// Fifth score at index 4: 60
//
// Enter 5 test scores: 854 254 41 15 541
//
// The updated array is:
// First score at index 0: 854
// Second score at index 1: 254
// Third score at index 2: 41
// Fourth score at index 3: 15
// Fifth score at index 4: 541
//
// Notice what the value of the array name is : 0x7ffed1c53c10
