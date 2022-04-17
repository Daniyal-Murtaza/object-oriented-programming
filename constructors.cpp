#include <iostream>
using namespace std;

// In previous programs we used --- setdata --- for initialization
// To shorten this process, we use constructors
// Constructor -> It is a special member function with same name as of the class.
// It is used to initialize the objects of its class
// IT IS AUTOMATICALLY INVOKED WHENEVER THE OBJECT IS CREATED

class Complex
{
    int a, b;

public:
    Complex();
    void printData();
};

Complex::Complex() // --> default constructor as it does not takes any parameter
{
    a = 10;
    b = 5;
    cout << "hello!" << endl;
}

void Complex::printData()
{
    cout << "The complex number is: " << a << " + " << b << "i" << endl;
}

int main()
{
    Complex c;
    c.printData();
    return 0;
}

// Properties of cinstructor:
// Should be declared in public section of the class
// They are automatically invoked whenever the object is created
// They do not return values and they do not have return type
// It can have default arguements
// We cannot refer to their address