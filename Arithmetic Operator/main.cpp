#include <iostream>

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

    ==, !=, >, <, >=, <=


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
    */

using namespace std;

int main()
{
    int x = 7;
    int y = 5;
    int a, b, c, d, e, f, g;

    cout << "Arithmetic Operators" << endl;

    a = x + y;
    b = x - y;
    c = x * y;
    d = x / y;
    e = x % y;
    f = ++x;
    g = --y;

    cout << "The value of x + y is: " << a << endl;
    cout << "The value of x - y is: " << b << endl;
    cout << "The value of x * y is: " << c << endl;
    cout << "The value of x / y is: " << d << endl;
    cout << "The value of x % y is: " << e << endl;
    cout << "The value of ++x is: " << f << endl;
    cout << "The value of --y is: " << g << endl;

    return 0;
}
