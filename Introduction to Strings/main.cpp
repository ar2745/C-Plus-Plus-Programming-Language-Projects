#include <iostream>
#include <cstring>

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
    char name1[15] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', ' ', '1', '!', '\0'};
    char name2[21] = {"Hello World 2!"};
    char name3[21] = {"Hello World 3!"};
    char name4[21];
    int length;

    cout << "Introduction to Strings" << endl;
    cout << name1 << endl;
    cout << name2 << endl;
    cout << name3 << endl;

    strcpy(name4, name3); //String Copy
    cout << name4 << endl;

    strcat(name1, name2); //String Concatenate
    cout << name1 << endl;

    length = strlen(name1); //String Length
    cout << length << endl;

    return 0;
}
