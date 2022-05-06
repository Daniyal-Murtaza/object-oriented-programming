#include <iostream>
using namespace std;

// Note: It's detailed explaination is given in notebook.

/*

class A: public B
{
    // order of execution of constructor -> first B() then A()
}

class A: public C, public B
{
    // order of execution of constructor -> first C() then B() then A()
}

class A: public C, virtual public B
{
    // order of execution of constructor -> first B() then C() then A()
}

*/

class Base1
{
protected:
    int var1;

public:
    Base1(int one)
    {
        var1 = one;
        cout << "Base1 constructor called " << endl;
    }

    void display_base1()
    {
        cout << "Base1: " << var1 << endl;
    }
};

class Base2
{
protected:
    int var2;

public:
    Base2(int two)
    {
        var2 = two;
        cout << "Base2 constructor called " << endl;
    }

    void display_base2()
    {
        cout << "Base1: " << var2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int der1, der2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        der1 = c;
        der2 = d;
        cout << "Derived constructor called " << endl;
    }

    void display_derived()
    {
        cout << "Der1: " << der1 << endl;
        cout << "Der2: " << der2 << endl;
    }
};

int main()
{
    Derived obj(5, 10, 15, 20);
    obj.display_base1();
    obj.display_base2();
    obj.display_derived();

    return 0;
}