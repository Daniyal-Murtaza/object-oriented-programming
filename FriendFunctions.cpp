#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void PrintNumber()
    {
        cout << "The complex no is: " << a << " + " << b << "i" << endl;
    }

    friend Complex sum(Complex c1, Complex c2);
};

// It is friend function
// Friend functions are those functions that are eligible to access the private data memebers of the class
// For this, one need to declare the function in class with the friend keyword and then define the function outside class
// A normal function outside the class cannot access the private variable of the class
Complex sum(Complex c1, Complex c2)
{
    Complex c3;
    c3.setdata(c1.a + c2.a, c1.b + c2.b);
    return c3;
}

int main()
{
    Complex c1, c2, c3;
    c1.setdata(4, 5);
    c1.PrintNumber();

    c2.setdata(6, 7);
    c2.PrintNumber();

    c3 = sum(c1, c2);
    c3.PrintNumber();

    return 0;
}

// PROPERTIES OF FRIEND FUNCTION:
// 1. Not in the scope of class
// 2. since it is not in the scope of the class, it cannot be called from the object of that class. i.e., c3.sum() -> Invalid
// 3. Can be invoked without the help of any object
// 4. Usually contains the object as arguement i.e., c3 = sum(c1, c2);
// 5. Can be decalred inside the private or public section of the class
// 6. It cant access the members directly by their names and need ----- objectName.memberName ----- to access any memeber