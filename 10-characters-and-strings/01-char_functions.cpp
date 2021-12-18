#include <cctype>
#include <iostream>
using std::cout;
using std::endl;

int main() {
    char str[] {"1234'5sddd'fdffg\n\t&^%23**~Alok Shandilya~     @!()-+=%^?<>;:"};
    int num_letters{};
    int num_digits{};
    int num_whitespace{};
    int num_punctuation{};
    int num_others{};
    for (char c : str) {
        if (isalpha(c))
            num_letters++;
        else if (isdigit(c))
            num_digits++;
        else if (isspace(c))
            num_whitespace++;
        else if (ispunct(c))
            num_punctuation++;
        else
            num_others++;
    }
    cout << "Letters : " << num_letters << endl;
    cout << "Digits : " << num_digits << endl;
    cout << "Whitespace : " << num_whitespace << endl;
    cout << "Punctuation : " << num_punctuation << endl;
    cout << "Others : " << num_others << endl;
    cout << endl;
    char str1[] {"This is a test - 1 2 3"};
    for (char c : str1) {
        cout << static_cast<char>(toupper(c));
    }
    cout << endl;
    return 0;
}

// output
//
// Letters : 22
// Digits : 7
// Whitespace : 8
// Punctuation : 23
// Others : 1
//
// THIS IS A TEST - 1 2 3
