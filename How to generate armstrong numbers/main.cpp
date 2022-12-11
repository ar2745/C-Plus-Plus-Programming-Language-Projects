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
    int rem;
    int x;
    long y = 0;
    long z = 0;
    long temp;

    cout << "Generate Armstrong Numbers" << endl;

    cout << "Please enter range of Armstrong Numbers: " << endl;
    cin >> y;

    cout << "The list of Armstrong Numbers up to " << y << endl;

    for(x = 1; x <= y; x++) {
        temp = x;

        while(temp != 0) {
            rem = temp % 10;
            z = z + rem * rem * rem;
            temp = temp / 10;
        }

        if(x == z) {
            cout << x << endl;
        }
        z = 0;
    }
    return 0;
}
