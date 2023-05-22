#include <iostream>
#include <cmath>

using namespace std;

int cmathDemo() {
//    floor rounds down numbers just like js
    double a = floor(1.2);
//    a = 1
    cout << a << endl;
//    pow takes two doubles and multiplies the fist to the power of the second.
    double b = pow(2, 3);
//    b = 2^3
//    b = 8
    cout << b << endl;
    return 0;
}

double findAreaOfCircle() {
    const double pi = 3.14;
    double radius;
    double area;
    cout << "Enter the radius of the circle and I will give you the area. : ";
    cin >> radius;
    area = pi * pow(radius, 2);
    cout << area << endl;
    return area;
}

// INQUIRE some more libraries to learn about
//  find the most common used libraries and prioritize them.
//  will find more samples to add here.


// namespace to export all of these functions to the main app page
namespace cmathNotes {
    int showCmathDemos() {
        cmathDemo();
        findAreaOfCircle();
        return 0;
    }
}

