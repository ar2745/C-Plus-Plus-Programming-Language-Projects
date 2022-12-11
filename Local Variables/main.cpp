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
    Dependent --

    Relational Operators

    ==, !=, >, <, >=, <=


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
    */

using namespace std;

int main()
{
    //Variable declaration
    int a, b, c;
    float x, y, z;

    //Variable initialization
    a = 7;
    b = 5;
    c = a + b;

    x = 9.3;
    y = 5.1;
    z = x + y;

    cout << "Local Variables" << endl;
    cout << "The result of a + b = " << c << endl;
    cout << "The result of x + y = " << z << endl;
    cout << "The result of a + b * x + y = " << c * z << endl;

    return 0;
}
