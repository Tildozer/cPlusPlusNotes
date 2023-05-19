#include <iostream>

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
    return 0;
}

int main() {
    int file_size = 0;
    int counter = 1;
// if number has decimals use double
    double sales = 9.99;
    cout << file_size << " " << sales << counter << endl;
    swap(3, 6);
    constants();
    mathematicalExpression(5, 6);
    return 0;
}

