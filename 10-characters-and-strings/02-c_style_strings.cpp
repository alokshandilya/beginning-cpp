#include <cctype>  // for character-based functions
#include <cstring> // for c-style string functions
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    // char uninit_string[20];
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};
    // cout << uninit_string; // Will likely display garbage! and warning.
    cout << "Please enter your first name : ";
    cin >> first_name;
    cout << "Please enter your last name: ";
    cin >> last_name;
    cout << "-------------------------------" << endl;
    cout << "Hello, " << first_name << " your first name has "
         << strlen(first_name) << " characters" << endl;
    cout << "and your last name, " << last_name << " has " << strlen(last_name)
         << " characters" << endl;
    // strlen does not return unsigned int, it returns size_t (it's unsigned
    // int or unsigned long etc.. based on machine)
    // on my machine it's typedef unsigned long
    // so, use size_t whereever needed.

    strcpy(full_name, first_name); // copy first_name to full_name
    strcat(full_name, " ");        // concatenate full_name and a space
    strcat(full_name, last_name);  // concatenate last_name to full_name
    cout << "Your full name is " << full_name << endl;
    cout << "-------------------------------" << endl;

    // cout << "Enter your full name: ";
    // cin >> full_name;
    // cout << "Your full name is " << full_name << endl;
    // if you enter Alok Shandilya, you will get only 1st name i.e Alok in my
    // case. (extraction operation ,cin stops on whitespace), and also the
    // program will take Shandilya and the program can take that Shandilya as
    // input in later parts of the program. alternatively, we can use
    // cin.getline(full_name, 50); // works fine with C-style strings.

    strcpy(temp, full_name);
    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;
    cout << "-------------------------------" << endl;

    for (size_t i{0}; i < strlen(full_name); ++i) {
        if (isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout << "Your full name is " << full_name << endl;
    cout << "-------------------------------" << endl;
    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;
    cout << "-------------------------------" << endl;
    cout << "Result of comparing " << temp << " and " << full_name << ": "
         << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " << temp << ": "
         << strcmp(full_name, temp) << endl;
    cout << endl;
    return 0;
}

// output
//
// Please enter your first name : Alok
// Please enter your last name: Shandilya
// -------------------------------
// Hello, Alok your first name has 4 characters
// and your last name, Shandilya has 9 characters
// Your full name is Alok Shandilya
// -------------------------------
// Alok Shandilya and Alok Shandilya are the same
// -------------------------------
// Your full name is ALOK SHANDILYA
// -------------------------------
// Alok Shandilya and ALOK SHANDILYA are different
// -------------------------------
// Result of comparing Alok Shandilya and ALOK SHANDILYA: 32
// Result of comparing ALOK SHANDILYA and Alok Shandilya: -32
