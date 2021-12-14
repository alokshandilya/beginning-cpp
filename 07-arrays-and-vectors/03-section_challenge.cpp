// Section 7
// Challenge

/* Write a C++ program as follows:
 *
 * Declare 2 empty vectors of integers named
 * vector1 and vector2, respectively.
 *
 * Add 10 and 20 to vector1 dynamically using push_back
 * Display the elements in vector1 using the at() method as well as its size
 * using the size() method
 *
 * Add 100 and 200 to vector2 dynamically using push_back
 * Display the elements in vector2 using the at() method as well as its size
 * using the size() method
 *
 * Declare an empty 2D vector called vector2D
 * Remember, that a 2D vector is a vector of vector<int>
 *
 * Add vector1 to vector2D dynamically using push_back
 * Add vector2 to vector2D dynamically using push_back
 *
 * Display the elements in vector2D using the at() method
 *
 * Change vector1.at(0) to 1000
 *
 * Display the elements in vector2D again using the at() method
 *
 * Display the elements in vector1
 *
 * What did you expect? Did you get what you expected? What do you think
 * happended?
*/

#include <iostream>
#include <vector> // don't forget
using std::cout;
using std::endl;
using std::vector; // don't forget

int main() {
    vector<int> vector1; // empty vector
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "The elements of Vector 1 are : " << endl
         << vector1.at(0) << endl
         << vector1.at(1) << endl;
    cout << "The size of Vector 1 is : " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout << "The elements of Vector 2 are : " << endl
         << vector2.at(0) << endl
         << vector2.at(1) << endl;
    cout << "The size of Vector 2 is : " << vector2.size() << endl;

    vector<vector<int>> vector2D; // empty 2d Vector
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);
    cout << "The elements of Vector2D are : " << endl
         << vector2D.at(0).at(0) << "\t" << vector2D.at(0).at(1)
         << endl // outputs  10   20
         << vector2D.at(1).at(0) << "\t" << vector2D.at(1).at(1)
         << endl; // outputs  100  200
    // if we display size of vector2D then it will show 2 and not 4 because :
    // The 1-dimensional vectors have 2 elements each (10, 20) and (100, 200)
    // The 2-dimensional vector has 2 elements (vector (10, 20), vector(10,20)).
    // No matter how big the vectors are inside, it won't change the size of the
    // top level vector2D.

    vector1.at(0) = 1000;
    cout << "The elements of Vector2D are : " << endl
         << vector2D.at(0).at(0) << "\t" << vector2D.at(0).at(1)
         << endl // outputs  10   20
         << vector2D.at(1).at(0) << "\t" << vector2D.at(1).at(1)
         << endl; // outputs  100  200
                  // and not 1000  200
                  // here, above output will be same because, when we deal with
                  // int, float, double etc. then only the copy of vectors is
                  // modified.

    // when the push_back() method is used, it copies the value of the original
    // and adds that  copy to the vector list not changing the original value.
    // This adds a new element at the end of the vector and the value is copied
    // to that new element.
    cout << "The elements of Vector 1 are : " << endl
         << vector1.at(0) << endl
         << vector1.at(1) << endl;

    return 0;
}

// output
//
// The elements of Vector 1 are :
// 10
// 20
// The size of Vector 1 is : 2
// The elements of Vector 2 are :
// 100
// 200
// The size of Vector 2 is : 2
// The elements of Vector2D are :
// 10	20
// 100	200
// The elements of Vector2D are :
// 10	20
// 100	200
// The elements of Vector 1 are :
// 1000
// 20
