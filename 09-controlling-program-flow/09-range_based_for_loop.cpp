// Section 9
// Range-based For Loop (C++11)

#include <iomanip>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::vector;

int main() {
    int scores[]{10, 20, 30};
    for (auto score : scores) // here compiler will deduce auto as int itself
        cout << score << endl;

    vector<double> temperatures{87.9, 77.9, 80.0, 72.5};
    double average_temp{};
    double total{};
    for (auto temp : temperatures) // here double
        total += temp;
    if (temperatures.size() != 0)
        average_temp = total / temperatures.size();
    // no need of cast or unsigned because total is double and size() will
    // return unsigned int but it will perform double division.
    cout << fixed << setprecision(1); // 1 number after decimal (round off)
    cout << "Average temperature is " << average_temp << endl;

    for (auto val : {1, 2, 3, 4, 5})
        cout << val << endl;

    for (auto c : "This is a test")
        if (c != ' ')
            cout << c;
    cout << endl;

    for (auto c : "This is a test")
        if (c == ' ')
            cout << "\t";
        else
            cout << c;

    cout << endl;
    return 0;
}

// output
//
// 10
// 20
// 30
// Average temperature is 79.6
// 1
// 2
// 3
// 4
// 5
// Thisisatest
// This is      a       test
