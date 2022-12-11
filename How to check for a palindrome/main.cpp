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
    int pal;
    int rev = 0;

    cout << "Checking a Palindrome" << endl;

    cout << "Please enter only positive numbers: " << endl;
    cin >> x;

    y = x;

    while(x != 0) {
        pal = x % 10;
        rev = (rev * 10) + pal;
        x = x / 10;
    }

    if(y == rev) {
        cout << "This number is a palindrome" << endl;
    }
    else {
        cout << "This number is not a palindrome" << endl;
    }

    return 0;
}
