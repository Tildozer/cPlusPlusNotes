#include <iostream>

using namespace std;

/*
    Type       Bytes       Range
 __________  __________  __________
  short     |    2     | -32,768 to 32,767 //use shorts to save memory
  int       |    4     | -2 billion to 2 billion
  unsigned  |    4     | 0 to 4,294,967,295
  long      |    4     | Same as int.
  float     |    4     | -3.4E38 to 3.4E38
  long long |    8     | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
  double    |    8     | -1.7E308 to 1.7E308
 long double|    8     | -3.4E932 to 1.7E4832
 ----------------------------------
   bool     |    1     | true/false
   char     |    1     | Stores a single character
*/
// to make long literal more readable for you can use a single quote as a digit separator.
// ex 3'560'345 == 3,560,345
int typeExamples() {
    double price = 99.99;
//    always add the F after a float, can be lowercase as well.
    float interestRate = 3.67F;
//   if you don't add the L add the end at compile time it will be made an int
    long fileSize = 90000L;
    char letter = 'a';
    bool isValid = false;
//  the keyword auto will automatically detect what type the variable should be
    auto number = 6;
    cout << "this is a double { " << price << " }" << endl
         << "this is a float { " << interestRate << " }" << endl
         << "this is a long! { " << fileSize << " }" << endl
         << "this is a char! { " << letter << " }" << endl
         << "this is a bool! { " << isValid << " }" << endl
         << "this is an auto! { " << number << " }" << endl;
    return 0;
}

int curlyInitializer() {
//    curly brackets after initialization will help detect errors and automatically set undefined variable to zero
    int zero{};
    cout << zero << endl;
//    if it's not a number it is just an empty string
    string test{};
    cout << "te" << test << "st" << endl;
    string curly {"this is a curly initialization"};
    cout << curly << endl;
    return 0;
}


// namespace to export all of these functions to the main app page
namespace typeDemonstrations {
    int showTypes() {
        typeExamples();
        curlyInitializer();
        return 0;
    }
}

