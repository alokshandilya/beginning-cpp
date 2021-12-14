// Section 11
// Function Definitions
// Area of Circle and Volume of a Cylinder

#include <iostream>
using namespace std;

const double pi{3.14159};

double calc_area_circle(double radius) {
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height) {
    // return pi * radius * radius * height;
    return calc_area_circle(radius) * height;
}

void area_circle() {
    double radius{};
    cout << "Enter the radius of the circle : ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is "
         << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius{};
    double height{};
    cout << "\nEnter the radius of the cylinder : ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder : ";
    cin >> height;

    cout << "The volume of a cylinder with radius " << radius << " and height "
         << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

// main
int main() {
    area_circle();
    area_circle(); // we can call function more than once
    volume_cylinder();
    return 0;
}

// output
//
// Enter the radius of the circle : 7
// The area of a circle with radius 7 is 153.938
// Enter the radius of the circle : 7.7
// The area of a circle with radius 7.7 is 186.265
//
// Enter the radius of the cylinder : 7
//
// Enter the height of the cylinder : 7.7
// The volume of a cylinder with radius 7 and height 7.7 is 1185.32
