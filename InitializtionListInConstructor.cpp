#include <iostream>
using namespace std;

/*
IT'S JUST AN ALTERNATIVE METHOD TO INITIALIZE USING CONSTRUCTOR


Syntax for initializtion list in constructor:

constructor (arguement-list) : initializtion-section
{
    assignment + other code
}

Example:

class Test
{
    int a, b;

public:
    Test(int one, int two) : a(one), b(two) {constructor - body}
};

*/

class Test
{
    int a, b;

public:
    Test(int one, int two) : a(one), b(two)
    {
        cout << "constructor called" << endl;
        cout << "Value of a is: " << a << endl;
        cout << "Value of b is: " << b << endl;
    }
};

int main()
{
    Test t(7, 8);

    return 0;
}