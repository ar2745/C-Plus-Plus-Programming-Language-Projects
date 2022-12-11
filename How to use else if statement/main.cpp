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
    int grade;

    cout << "Else if statement" << endl;
    cout << "Please enter a student's grade" << endl;
    cin >> grade;

    if(grade > 100) {
        cout << "Incorrect grade" << endl;
    }
    else if(grade >= 90 && grade <= 99) {
        cout << "Your grade is A" << endl;
    }
    else if(grade >= 80  &&grade <= 89) {
        cout << "Your grade is B" << endl;
    }
    else if(grade >= 70 && grade <= 79) {
        cout << "Your grade is C" << endl;
    }
    else if(grade >= 60 && grade <= 69) {
        cout << "Your grade is D" << endl;
    }
    else if(grade >= 0 && grade <= 59) {
        cout << "Your grade is F" << endl;
    }

    return 0;
}
