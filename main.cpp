#include <iostream>
#include "math_module.h"

using namespace std;
using namespace mathModules;

int main() {
    int file_size = 0;
    int counter = 1;
// if number has decimals use double
    double sales = 9.99;
    cout << "File size " << file_size << " sales " << sales << " counter " << counter << endl;
    swap(3, 6);
    constants();
    mathematicalExpression(5, 6);
    expressionToCode(60, 4);
    return 0;
}
