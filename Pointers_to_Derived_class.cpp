#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Value of var_base is: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Value of var_base is: " << var_base << endl;
        cout << "Value of var_derived is: " << var_derived << endl;
    }
};

int main()
{
    BaseClass BC_obj;
    DerivedClass DC_obj;

    // If we make a base_class_pointer then we can only access the data members and function members of the base class.

    BaseClass *base_class_pointer = &DC_obj; // pointing base_class_pointer to derived class object
    base_class_pointer->var_base = 4;
    cout << "base class pointer" << endl;
    base_class_pointer->display();
    cout << endl;

    // base_class_pointer->var_derived = 42; we cannot do this (it will throw an error)

    //***************************************************************************************************************

    // If we make a derived_class_pointer then we can access the data members and function members
    // of the base class as well as derived class.

    DerivedClass *derived_class_pointer = &DC_obj; // pointing derived_class_pointer to derived class object
    derived_class_pointer->var_derived = 53;
    derived_class_pointer->var_base = 78;
    cout << "Derived class pointer" << endl;
    derived_class_pointer->display();

    return 0;
}

/*

Base class ka pointer banaya or agr usai point kradiya derived class k object pr tou sirf base class
k data members or function members accessible hogai (Derived class k accessible nahi honge).

Derived class ka pointer banaya or agr usai point kradiya derived class k object pr tou base class or derived class dono
k data members or function members accessible hogai.

SIMPLE AS THAT!

*/