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
    int z;

    cout << "Calculate LCM" << endl;

    cout << "Please enter first number: " << endl;
    cin >> x;
    cout << "Please enter second number: " << endl;
    cin >> y;

    z = (x > y)?x:y;

    while(true){
        if(z % x == 0 && z % y == 0) {
            cout << "The LCM of " << x << " & " << y << ": " << z << endl;
            break;
        }
        else {
            z++;
        }
    }
    return 0;
}
