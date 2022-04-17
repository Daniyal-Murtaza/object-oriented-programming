#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumReal(Complex, Complex);
    int sumImag(Complex, Complex);
};

class Complex
{
    int a, b;

    // How other functions or functions under other classes can access the private data member oof this class?

    // Method 1: Individally declaring fucntion as friends (better when 1 or 2 functions)
    // friend int Calculator::sumReal(Complex c1, Complex c2);
    // friend int Calculator::sumImag(Complex c1, Complex c2);

    // Method 2: Declare the whole class as friend (better when big number of functions)
    friend class Calculator;

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
};

int Calculator::sumReal(Complex c1, Complex c2)
{
    return c1.a + c2.a;
}

int Calculator::sumImag(Complex c1, Complex c2)
{
    return c1.b + c2.b;
}

int main()
{
    Complex c1, c2;
    c1.setdata(1, 5);
    c1.PrintNumber();

    c2.setdata(4, 5);
    c2.PrintNumber();

    Calculator cal;
    int resultReal = cal.sumReal(c1, c2);
    cout << "The sum of real part of Complex Numbers is: " << resultReal << endl;

    int resultImag = cal.sumImag(c1, c2);
    cout << "The sum of Imaginary part of Complex Numbers is: " << resultImag << endl;

    return 0;
}