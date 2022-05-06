#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y);
    void printComplex();
};

Complex::Complex(int x, int y) //--> Parametrized constructor
{
    a = x;
    b = y;
}

void Complex::printComplex()
{
    cout << "Number is: " << a << "+" << b << "i" << endl;
}

int main()
{
    // Complex x;  ---> additional informaion: it will give error of "no default costructor".

    // how to give number in x and y in Parametrized constructor. Two ways:

    // implicit call
    Complex c(3, 4);

    // explicit call
    Complex d = Complex(3, 4);

    c.printComplex();
    d.printComplex();
    return 0;
}