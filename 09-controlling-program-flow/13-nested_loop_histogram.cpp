// Section 9
// Nested Loops - Histogram

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    int num_items{};
    cout << "How many data items do you have? ";
    cin >> num_items;

    vector<int> data{};
    for (int i{1}; i <= num_items; ++i) {
        int data_item{};
        cout << "Enter data item " << i << ": ";
        cin >> data_item;
        data.push_back(data_item);
    }
    cout << "\nDisplaying Histogram" << endl;
    for (auto val : data) {
        for (int i{1}; i <= val; ++i) {
            if (i % 5 == 0)
                cout << "*";
            else
                cout << "-";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

// Sample Run 1
//
// How many data items do you have? 5
// Enter data item 1: 5
// Enter data item 2: 10
// Enter data item 3: 15
// Enter data item 4: 20
// Enter data item 5: 25
//
// Displaying Histogram
// ----*
// ----*----*
// ----*----*----*
// ----*----*----*----*
// ----*----*----*----*----*
//
// Sample Run 2
//
// How many data items do you have? 5
// Enter data item 1: 2
// Enter data item 2: 8
// Enter data item 3: 4
// Enter data item 4: 9
// Enter data item 5: 5
//
// Displaying Histogram
// --
// ----*---
// ----
// ----*----
// ----*
