#include <iostream>
using namespace std;

class Complex
{
    int x, y;

public:
    Complex()
    {
        x = 0;
        y = 0;
    }

    Complex(int a, int b)
    {
        x = a;
        y = b;
    }

    Complex(int a)
    {
        x = a;
        y = 0;
    }

    Complex(string x)
    {
        cout << x << endl;
    }

    void printData()
    {
        cout << "The complex number is: " << x << " + " << y << "i" << endl;
    }
};

int main()
{
    Complex c1;
    c1.printData();

    Complex c2(5, 6);
    c2.printData();

    Complex c3(7);
    c3.printData();

    return 0;
}