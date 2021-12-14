// Section 11
// Function Prototypes
// Area of Circle and Volume of a Cylinder

#include <iostream>
using namespace std;

// Function prototypes
// Order doesn't matter [as compiler will see them all]
double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double);
// varName are optional in function prototypes, but having them is good for
// documentation. varName can also be different but same are recommended to
// increase readability.
void area_circle();
void volume_cylinder();

const double pi = 3.14159;

// main
int main() {
    area_circle();
    volume_cylinder();
    return 0;
}

double calc_volume_cylinder(double radius, double height) {
    // return pi *radius * radius * height;
    return calc_area_circle(radius) * height;
}

double calc_area_circle(double radius) {
    return pi * radius * radius;
}

void area_circle() {
    double radius{};
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is "
         << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius{};
    double height{};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    cout << "\nThe volume of a cylinder with radius " << radius
         << " and height " << height << " is "
         << calc_volume_cylinder(radius, height) << endl;
}

// output
//
// Enter the radius of the circle: 7
// The area of a circle with radius 7 is 153.938
//
// Enter the radius of the cylinder: 7
// Enter the height of the cylinder: 7.7
//
// The volume of a cylinder with radius 7 and height 7.7 is 1185.32
