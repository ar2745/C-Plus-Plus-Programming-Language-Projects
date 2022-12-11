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
    */

using namespace std;

int main()
{
    int a = 7;
    int b = 4;

    cout << "Relational Operators" << endl;

    if(a == b){
        cout << "This condition is true" << endl;
    }
    else {
        cout << "This condition is false" << endl;
    }

    if(a != b){
        cout << "This condition is true" << endl;
    }
    else {
        cout << "This condition is false" << endl;
    }

    if(a > b){
        cout << "This condition is true" << endl;
    }
    else {
        cout << "This condition is false" << endl;
    }

    if(a < b){
        cout << "This condition is true" << endl;
    }
    else {
        cout << "This condition is false" << endl;
    }

    if(a <= b){
        cout << "This condition is true" << endl;
    }
    else {
        cout << "This condition is false" << endl;
    }

    if(a >= b){
        cout << "This condition is true" << endl;
    }
    else {
        cout << "This condition is false" << endl;
    }

    return 0;
}
