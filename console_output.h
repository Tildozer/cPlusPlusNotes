#include <iostream>

using namespace std;

int output(int x, int y) {
//    endl means endLine in your console.
    cout << "x is equal to " << x << endl
         << "y is equal to " << y << endl;
    return 0;
}

double findTaxOwed(double sales) {
    const double stateTaxRate = .04;
    double stateTaxes = sales * stateTaxRate;

    const double federalTaxRate = .02;
    double federalTaxes = sales * federalTaxRate;

    double taxes = stateTaxes + federalTaxes;
    double total = taxes + sales;

    cout << "your taxes owed come out to $" << taxes << endl
         << "and your total is $" << total << endl;

    return total;
}

int cinLesson() {
    cout << "enter a value: ";
    int value;
    cin >> value;
    cout << value;
    return 0;
}


namespace demoOutput {

    int showOutput() {
        output(10, 20);
        output(2, 5);
        findTaxOwed(95000);
        cinLesson();
        return 0;
    }
}
