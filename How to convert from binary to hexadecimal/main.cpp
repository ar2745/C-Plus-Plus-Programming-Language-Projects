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
    long int binary;
    long int hexadecimal = 0;
    long int x = 1;
    long int y;
    long int z;

    cout << "Binary to Hexadecimal" << endl;

    cout << "Please enter binary numbers only: " << endl;
    cin >> binary;

    z = binary;

    while(binary != 0) {
        y = binary % 10;
        hexadecimal = hexadecimal + y * x;
        x = x * 2;
        binary = binary / 10;
    }

    cout << "The Hexadecimal equivalent of " << z << " is " << hexadecimal << endl;

    return 0;
}