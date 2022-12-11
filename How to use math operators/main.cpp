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
    int x;
    int y;
    int sum;
    int mul;
    int sub;
    float div;
    int mod;

    cout << "Addition, Subtraction, Multiplication and Division of two numbers" << endl;
    cout << "Please enter first number: " << endl;
    cin >> x;

    cout << "Please enter second number: " << endl;
    cin >> y;

    sum = x + y;
    mul = x * y;
    sub = x - y;
    div = x / y;
    mod = x % y;

    cout << "The sum of " << x << " + " << y << " = " << sum << endl;
    cout << "The multiplication of " << x << " * " << y << " = " << mul << endl;
    cout << "The subtraction of " << x << " - " << y << " = " << sub << endl;
    cout << "The division of " << x << " / " << y << " = " << div << endl;
    cout << "The modulus of " << x << " % " << y << " = " << mod << endl;

    return 0;
}
