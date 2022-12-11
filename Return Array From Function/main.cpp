#include <iostream>
#include <ctime>
#include <cstdlib>

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

int *randomNumber(){
    static int num[20];
    srand((unsigned)time(NULL));

    int x;

    for(x = 0; x < 10; x++){
        num[x] = rand();
        cout << num[x] << endl;
    }
    return num;
}

int main()
{
    int *pointer;
    int x;

    cout << "Return Array From Function" << endl;

    pointer = randomNumber();

    for(x = 0; x < 10; x++){
        cout << "*(pointer + " << x << ") : " << *(pointer + x) << endl;
    }

    return 0;
}
