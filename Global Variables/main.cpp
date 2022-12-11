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

//Global variables
int a = 7, b = 3, c = a + b;

int main()
{
    //Local variables
    int a1 = 5, b1 = 7, c1 = a1 + b1;

    cout << "This result is from the Global variables: " << c << endl;

    cout << "The result is from the Local variables: " << c1 << endl;

    return 0;
}
