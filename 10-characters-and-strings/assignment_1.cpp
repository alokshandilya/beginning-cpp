// Attempt again after DSA classes.

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string letterPyramid{};
    cout << "Enter string for letter pyramid" << endl;
    cin >> letterPyramid;
    size_t lengthString = letterPyramid.length();
    int position{0};

    for (auto c : letterPyramid) {
        size_t Spaces = lengthString - position;
        while (Spaces > 0) {
            cout << " ";
            Spaces--;
        }

        for (size_t j{}; j < static_cast<size_t>(position); j++) {
            cout << letterPyramid.at(j);
        }
        cout << c;

        for (int j = (position - 1); j >= 0; --j) {
            auto k = static_cast<size_t>(j);
            std::cout << letterPyramid.at(k);
        }

        std::cout << std::endl;
        position++;
    }

    return 0;
}
