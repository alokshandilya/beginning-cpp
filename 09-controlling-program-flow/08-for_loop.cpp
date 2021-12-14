// Section 9
// For Loop

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
    for (int i{1}; i <= 10; ++i)
        cout << i << endl; // 1 to 10 (each in a line)
    for (int i{1}; i <= 10; i += 2)
        cout << i << endl; // 1, 3, 5, 7, 9 (each in a line)
    for (int i{10}; i > 0; --i)
        cout << i << endl;       // 10 to 1 (each in a line)
    cout << "Blastoff!" << endl; // will print only once not 10 times.
    for (int i{10}; i <= 100; i += 10) {
        if (i % 15 == 0)
            cout << i << endl; // 30 60 90 (each in a line)
    }
    for (int i{1}, j{5}; i <= 5; ++i, ++j)
        cout << i << " + " << j << " = " << (i + j)
             << endl; // output (below in comments)
    for (int i{1}; i <= 100; ++i) {
        cout << i;
        if (i % 5 == 0)
            cout << endl;
        else
            cout << " ";
    }
    for (int i{1}; i <= 100; ++i) {
        cout << i << ((i % 10 == 0) ? "\n" : " ");
    }

    vector<int> nums{10, 20, 30, 40, 50};
    for (unsigned i{0}; i < nums.size(); ++i)
        cout << nums[i] << endl;
    // if we use int i{0} then warning
    // because .size() returns unsigned int & it will compile fine
    // but can generate warning ...
    // comparison b/w signed and unsigned integers.
    cout << endl;
    return 0;
}

// output
//
// 1 + 5 = 6
// 2 + 6 = 8
// 3 + 7 = 10
// 4 + 8 = 12
// 5 + 9 = 14
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25
// 26 27 28 29 30
// 31 32 33 34 35
// 36 37 38 39 40
// 41 42 43 44 45
// 46 47 48 49 50
// 51 52 53 54 55
// 56 57 58 59 60
// 61 62 63 64 65
// 66 67 68 69 70
// 71 72 73 74 75
// 76 77 78 79 80
// 81 82 83 84 85
// 86 87 88 89 90
// 91 92 93 94 95
// 96 97 98 99 100
// 1 2 3 4 5 6 7 8 9 10
// 11 12 13 14 15 16 17 18 19 20
// 21 22 23 24 25 26 27 28 29 30
// 31 32 33 34 35 36 37 38 39 40
// 41 42 43 44 45 46 47 48 49 50
// 51 52 53 54 55 56 57 58 59 60
// 61 62 63 64 65 66 67 68 69 70
// 71 72 73 74 75 76 77 78 79 80
// 81 82 83 84 85 86 87 88 89 90
// 91 92 93 94 95 96 97 98 99 100
// 10
// 20
// 30
// 40
// 50

