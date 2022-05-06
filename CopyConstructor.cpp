#include <iostream>
using namespace std;

class Number
{
private:
    int a;

public:
    Number()
    {
        a = 0; // (1)
    };

    Number(int num)
    {
        a = num;
    }

    Number(Number &obj)
    { // copy constructor
        cout << "copy constructor called!!!" << endl;
        a = obj.a;
    }

    // when no copy constructor is found, compiler supplies its own copy constructor.

    void printNumber()
    {
        cout << "The number is: " << a << endl;
    }
};

int main()
{
    // Number n1(7);
    // n1.printNumber();

    // output: The number is: 7    ---> when (1) is commented

    //********************************************************************************************

    // Number n1, n2, n3;

    // output:
    // Error->no default constructor    ---> when(1) is commented

    //**********************************************************************************************

    Number n1, n2, n3(35);
    n1.printNumber();
    n2.printNumber();
    n3.printNumber();

    //**********************************************************************************************

    // Copy constructor

    // To make n4 exactly like n3
    Number n4(n3);
    n4.printNumber();

    return 0;
}