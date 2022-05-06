#include <iostream>
using namespace std;

// Syntax
// class Derived(C) : visibility-mode Base(A), visibility-mode Base(B)
// {
//     Body of Class Derived(C)
// }

class Base_A
{
protected:
    int base1;

public:
    void set_base1(int b1)
    {
        base1 = b1;
    }
};

class Base_B
{
protected:
    int base2;

public:
    void set_base2(int b2)
    {
        base2 = b2;
    }
};

class Derived_C : public Base_A, public Base_B
{
public:
    void display()
    {
        cout << "The sum of base1 and base2 is: " << (base1 + base2) << endl;
    }
};

int main()
{
    Derived_C base3;
    base3.set_base1(20);
    base3.set_base2(40);
    base3.display();
    return 0;
}