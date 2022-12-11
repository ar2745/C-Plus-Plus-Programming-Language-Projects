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

int fibonacci(int x) {
    if(x == 0) {
        return 0;
    }
    else if(x == 1) {
        return 1;
    }
    else {
        return(fibonacci(x - 1) + fibonacci(x - 2));
    }
}

int main()
{
    int x = 0;
    int y;
    int z;

    cout << "Fibonacci Series with recursive function" << endl;

    cout << "Please enter number of Fibonacci Series: " << endl;
    cin >> y;

    cout << "The result of the Fibonacci Series: " << endl;

    for(z = 1; z <= y; z++) {
        cout << fibonacci(x) << endl;
        x++;
    }

    return 0;
}
