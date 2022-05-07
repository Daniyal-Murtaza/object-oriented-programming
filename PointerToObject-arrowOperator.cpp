#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void set_data(int r, int i)
    {
        real = r;
        imag = i;
    }

    void get_data()
    {
        cout << "Real: " << real << endl;
        cout << "Imag: " << imag << endl;
    }
};

int main()
{
    // METHOD A:
    //  Complex c;
    //  Complex *ptr = &c;

    // METHOD B:
    Complex *ptr = new Complex;

    //************************************

    // METHOD A:
    // c.set_data(7, 8);
    // c.get_data();

    // METHOD B:
    // (*ptr).set_data(7, 8); // More straightforward way to do this is method C
    // (*ptr).get_data();

    // METHOD 3:
    ptr->set_data(7, 8);
    ptr->get_data();

    // Array Of Objects
    Complex *arr_ptr = new Complex[3];

    arr_ptr->set_data(50, 60);
    arr_ptr->get_data();

    (arr_ptr + 1)->set_data(100, 120);
    (arr_ptr + 1)->get_data();

    (arr_ptr + 2)->set_data(80, 90);
    (arr_ptr + 2)->get_data();

    delete[] ptr;
    delete[] arr_ptr;
    return 0;
}