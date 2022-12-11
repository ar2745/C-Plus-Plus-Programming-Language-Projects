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

int list_prime(int n) {
    int x;
    for(x = 2; x <= n - 1; x++) {
        if(n % x == 0) {
            return 0;
        }
    }
    if(x == n) {
        return 1;
    }
}

int main()
{
    int x;
    int y;
    int z;

    cout << "List of Prime Numbers up to a given number" << endl;

    cout << "Please enter the range of prime numbers" << endl;
    cin >> x;

    for(y = 0; y < x; y++) {
        z = list_prime(y);

        if(z == 1) {
            cout << y << endl;
        }
    }

    return 0;
}
