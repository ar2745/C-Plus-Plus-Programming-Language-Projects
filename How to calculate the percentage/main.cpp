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
    int sum;
    int s1;
    int s2;
    int s3;
    int s4;
    int s5;
    int s6;
    int s7;
    int total = 800;
    float percent;

    cout << "Calculate Percentage" << endl;
    cout << "Please enter the marks of 7 subjects: " << endl;
    cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7;

    sum = s1 + s2 + s3 + s4 + s5 + s6 + s7;

    cout << "The sum of 7 subjects: " << sum << endl;

    percent = (sum * 100) / total;

    cout << "Percentage: " << percent << endl;
    return 0;
}
