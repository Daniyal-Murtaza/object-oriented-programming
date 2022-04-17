#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    void setdata(int v1, int v2)
    {
        real = v1;
        imag = v2;
    }

    void sum(Complex a, Complex b)
    {
        real = a.real + b.real;
        imag = a.imag + b.imag;
    }

    void getdata()
    {
        cout << "The complex number is: " << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setdata(1, 4);
    c1.getdata();

    c2.setdata(5, 6);
    c2.getdata();

    c3.sum(c1, c2);
    c3.getdata();

    return 0;
}