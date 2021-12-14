// Section 7
// Vectors

#include <iostream>
#include <vector> // don't forget this in order to use vectors
using std::cin;
using std::cout;
using std::endl;
using std::vector; // don't forget if you not use -> using namespace std;

int main() {
    // vector<char> vowels;     // empty
    // vector<char> vowels (5); // 5 initialized all to zero
    vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
    // automatically gets size 5 based on initiliasation.

    cout << vowels[0] << endl;
    // [] -> array like syntax will not do bound checking.

    cout << vowels[4] << endl;

    // constructor like initiliasation.
    // vector<int> testScores (3);
    // unlike array, 3 elements all initialized to zero.

    // vector<int> testScores (3, 100);
    // unlike array, 3 elements all initialized to 100

    vector<int> testScores{100, 98, 89};

    // using [], array syntax with vectors will not provide bounds checking.
    cout << "\nTest scores using array syntax:" << endl;
    cout << testScores[0] << endl;
    cout << testScores[1] << endl;
    cout << testScores[2] << endl;

    cout << "\nTest scores using vector syntax:" << endl;
    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;
    cout << "\nThere are " << testScores.size() << " scores in the vector"
         << endl;
    // vectorName.size() will give size of vector.
    // here testScores.size() will return 3
    cout << "\nEnter 3 test scores: ";
    cin >> testScores.at(0);
    cin >> testScores.at(1);
    cin >> testScores.at(2);

    cout << "\nUpdated test scores: " << endl;
    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;

    cout << "\nEnter a test score to add to the vector: ";
    int scoreToAdd{0};
    cin >> scoreToAdd;
    testScores.push_back(scoreToAdd);
    cout << "\nEnter one more test score to add to the vector: ";
    cin >> scoreToAdd;
    testScores.push_back(scoreToAdd);

    cout << "\nTest scores are now: " << endl;
    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;
    cout << testScores.at(3) << endl;
    cout << testScores.at(4) << endl;

    cout << "\nThere are now " << testScores.size() << " scores in the vector"
         << endl;

    // cout << "This should cause an exception!!" << testScores.at(10) << endl;
    // exception like out of range

    // Example of a 2D-vector :
    // A 2D vector is a vector that has vectors as rows and each of those
    // vectors has integers in this case:
    // vector_2d
    // Row 0:  {1, 2, 3, 4, 5}
    // Row 1: {10, 20, 30}
    // Row 2: {100, 200, 300}
    // vector_2d.at(0) is the vector at Row 0 which is  {1, 2, 3, 4, 5}
    // vector_2d.at(1) is the vector at Row 1 which is  {10, 20, 30}
    // vector_2d.at(0).at(0) is the integer at column 0 in the Row 0 vector
    // which is: {1, 2, 3, 4, 5} vector_2d.at(0).at(2) is the integer at column
    // 2 in the Row 0 vector which is: {1, 2, 3, 4, 5} vector_2d.at(2).at(1) is
    // the integer at column 1 in the Row 2 vector which is: {100, 200, 300}

    vector<vector<int>> movieRatings{
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };

    cout << "\nHere are the movie rating for reviewer #1 using array syntax :"
         << endl;
    cout << movieRatings[0][0] << endl;
    cout << movieRatings[0][1] << endl;
    cout << movieRatings[0][2] << endl;
    cout << movieRatings[0][3] << endl;

    cout << "\nHere are the movie rating for reviewer #1 using vector syntax :"
         << endl;
    cout << movieRatings.at(0).at(0) << endl;
    cout << movieRatings.at(0).at(1) << endl;
    cout << movieRatings.at(0).at(2) << endl;
    cout << movieRatings.at(0).at(3) << endl;

    cout << endl;
    return 0;
}

// output
//
// a
// u
//
// Test scores using array syntax:
// 100
// 98
// 89
//
// Test scores using vector syntax:
// 100
// 98
// 89
//
// There are 3 scores in the vector
// Enter 3 test scores: 89 54 12
//
// Updated test scores:
// 89
// 54
// 12
//
// Enter a test score to add to the vector: 20
//
// Enter one more test score to add to the vector: 21
//
// Test scores are now:
// 89
// 54
// 12
// 20
// 21
//
// There are now 5 scores in the vector
//
// Here are the movie rating for reviewer #1 using array syntax :
// 1
// 2
// 3
// 4
//
// Here are the movie rating for reviewer #1 using vector syntax :
// 1
// 2
// 3
// 4
