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

long fact_ncr(int n, int r);
long fact_npr(int n, int r);
long factorial(int n);

int main()
{
    int n, r;
    long ncr, npr;

    cout << "Factorial of nCr and nPr" << endl;

    cout << "Please enter the value of n: " << endl;
    cin >> n;

    cout << "Please enter the value of r: " << endl;
    cin >> r;

    ncr = fact_ncr(n, r);
    npr = fact_npr(n, r);

    cout << n << "C" << r << " = " << ncr << endl;
    cout << n << "P" << r << " = " << npr << endl;

    return 0;
}

long fact_ncr(int n, int r) {
    long result;
    result = factorial(n) / (factorial(r) * factorial(n - r));

    return result;
}

long fact_npr(int n, int r) {
    long result;
    result = factorial(n) / factorial(n - r);

    return result;
}

long factorial(int n) {
    int x;
    long result = 1;

    for(x = 1; x <= n; x++) {
        result = result * x;
    }

    return(result);
}
