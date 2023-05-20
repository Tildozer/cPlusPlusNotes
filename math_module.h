#include <iostream>

using namespace std;

namespace mathModules {
    int swap(int a, int b) {
        int new_a = b;
        b = a;
        a = new_a;
        cout << a << endl << b << endl;
        return 0;
    }

    double constants() {
        const double pi = 3.14;
//    pi = 0; // will error.
        return pi * 10;
    }

    int mathematicalExpression(int x, int y) {
//    int
        int z = x + y;
        cout << "z " << z << endl;
//    will automatically round down for you.
        int a = x / y;
        cout << "a " << a << endl;
//    to overcome this and see the actual value
        double newX = x;
        double aB = newX / y;
        cout << "a as double " << aB << endl;
        int b = x * y;
        cout << "b " << b << endl;
        int c = x - y;
        cout << "c " << c << endl;
        int d = x % y;
        cout << "d " << d << endl;
        d = d * 5;
        cout << "d " << d << endl;
//    pemdas still applies to all operators
        return 0;
    }

    double expressionToCode(double x, int y) {
        double z = (x + 10) / (3 * y);
        cout << "Answer = " << z << endl;
        return z;
    }
}
