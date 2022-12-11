#include <iostream>
#include <cmath>

/*The author of this code is Andrew Robinson
    Date:12/24/21
    This is for education
    GitHub ID

    Data Types

    char
    int
    short int
    long int
    float
    double

    %s = string ""
    %d = integer
    %f = float

    Arithmetic Operators

    Addition +
    Subtraction -
    Division /
    Modulus %
    Increment ++
    Decrement --

    Relational Operators

    Equivalent ==
    Not Equal !=
    Greater Than >
    Less Than <
    Greater Than or Equal >=
    Less Than or Equal <=


    if(x < y)

        cout << "x is less than y" << endl;

    else

        cout << "x is not less than y" << endl;


    Logical Operators

    And Operator &&
    Or Operator ||
    Not Operator !

    String Functions

    strcpy
    strcat
    strlen
    strcmp
    strchr
    strstr

    Escape Sequences C++ Programming Language

    New Line \n
    Form Feed \f
    Backspace \b
    Horizontal Tap \t
    Carriage Return \r
    Vertical Tap \v
    Character \' or \"
    Alert \a

    Bitwise Operators

    Binary &
    Or |
    Exal ^
    Shift Left <<
    Shift Right >>
    */

using namespace std;

int main()
{
    int x = 120;
    int y = -24;
    float a = 56.8;
    float b = 456.98;

    cout << "Mathematical Functions" << endl;

    cout << "sin(x) = " << sin(x) << endl;
    cout << "log(x) = " << log(x) << endl;
    cout << "abs(y) = " << abs(y) << endl;
    cout << "floor(a) = " << floor(a) << endl;
    cout << "sqrt(x) = " << sqrt(x) << endl;
    cout << "pow(b,2) = " << pow(b,2) << endl;

    return 0;
}
