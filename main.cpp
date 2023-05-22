#include <iostream>
#include "math_module.h"
#include "console_output.h"
#include "standard_library.h"
#include "data_types.h"

using namespace std;
using namespace mathModules;

int main() {
    int file_size = 0;
    int counter = 1;
// if number has decimals use double
    double sales = 9.99;
    cout << "File size " << file_size << " sales " << sales << " counter " << counter << endl;
    doMath();
    demoOutput::showOutput();
    cmathNotes::showCmathDemos();
    typeDemonstrations::showTypes();
    moreMath();
    return 0;
}
