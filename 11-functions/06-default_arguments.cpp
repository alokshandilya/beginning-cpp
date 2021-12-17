// Section 11
// Default Arguments

#include <iomanip>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::string;

// default values can be in proptotype or definition (not both)
// (best practice to include in proptotype). They must appear at the tail end of
// the parmameter list.
// can have multiple default values.
// (must appear consecutively at the tail end of the parmater list).
// i.e if you default 1st then you must default all, or you can ignore all and
// only default last, or starting from last, second last...
double calc_cost(double base_cost = 100.0, double tax_rate = 0.06,
                 double shipping = 3.50);

void greeting(string name, string prefix = "Mr.", string suffix = "");

double calc_cost(double base_cost, double tax_rate, double shipping) {
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name, string prefix, string suffix) {
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}

// main
int main() {
    double cost{0};
    cost = calc_cost(100.0, 0.08, 4.25); // will use no defaults 100 + 8 + 4.25

    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl; // 112.25

    cost = calc_cost(100.0, 0.08); // will use default shipping 100 + 8 + 3.50
    cout << "Cost is: " << cost << endl; // 111.50

    cost =
        calc_cost(200.0); // will use default tax and shipping 200 + 12 + 3.50
    cout << "Cost is: " << cost << endl; // 215.50

    cost = calc_cost();                  // will use all defaults
    cout << "Cost is: " << cost << endl; // 100 + 6 + 3.50

    greeting("Glenn Jones", "Dr.", "M.D.");
    greeting("James Rogers", "Professor", "Ph.D.");
    greeting("Frank Miller", "Dr.");
    greeting("William Smith");
    greeting("Mary Howard", "Mrs.", "Ph.D.");

    cout << endl;
    return 0;
}

// output
//
// Cost is: 112.25
// Cost is: 111.50
// Cost is: 215.50
// Cost is: 109.50
// Hello Dr. Glenn Jones M.D.
// Hello Professor James Rogers Ph.D.
// Hello Dr. Frank Miller
// Hello Mr. William Smith
// Hello Mrs. Mary Howard Ph.D.
