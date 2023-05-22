#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

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

// ______________________ working with numbers ______________________

int colorExample() {
//    0b lets the system know you are writing your number in binary
    int binaryNumber = 0b11111111;
    cout << binaryNumber << endl;
    int hexiDecimalNumber = 0xFF;
    cout << hexiDecimalNumber << endl;
    return 0;
}

int narrowing() {
//  {} works the same as =
//  this is acceptable but can't be done the other way.
    short number {100};
    int another {number};
    cout << another << endl;
    return 0;
}

int generateRandomNumber() {
//    ctime
    long elapsedSeconds {time(nullptr)};
//    cstdlib
    srand(elapsedSeconds);
//    cstlib
    int number = rand() % 10;
    cout << number << endl;
    return 0;
}

int rollDice() {
    const short minValue = 1;
    const short maxValue = 6;
    srand(time(nullptr));
    short first = rand() % (maxValue - minValue + 1) + minValue;
    short second = rand() % (maxValue - minValue + 1) + minValue;
    cout << first << " " << second << endl;
    return 0;
}

// namespace to export all of these functions to the main app page
namespace mathModules {
    int doMath() {
        swap(3, 6);
        constants();
        mathematicalExpression(5, 6);
        expressionToCode(60, 4);
        return 0;
    }

    int moreMath() {
        colorExample();
        generateRandomNumber();
        rollDice();
        return 0;
    }
}
