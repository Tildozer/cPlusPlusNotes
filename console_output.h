#include <iostream>
// was used to manipulate Celsius to a fixed point double.
#include <iomanip>

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
    cout << "enter values for x and y: ";
    int x;
    int y;
    cin >> x >> y;
    cout << x + y << endl;
    return 0;
}

double convertToCelsius() {
    cout << "enter a temperature in fahrenheit to have it converted to celsius: ";
    double fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) * (5.0 / 9);
//   <iomanip> made this possible.
    cout << setprecision(1) << fixed;
    cout << celsius << endl;
    return celsius;
}

// namespace to export all of these functions to the main app page
namespace demoOutput {

    int showOutput() {
        output(10, 20);
        output(2, 5);
        findTaxOwed(95000);
        cinLesson();
        convertToCelsius();
        return 0;
    }
}
