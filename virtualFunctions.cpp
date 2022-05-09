#include <iostream>
using namespace std;

// pointer_to_derived_class is pre requisite for this

class BaseClass
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "1- Value of var_base is: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2-  Value of var_base is: " << var_base << endl;
        cout << "2- Value of var_derived is: " << var_derived << endl;
    }
};

int main()
{
    BaseClass BC_obj;
    DerivedClass DC_obj;

    //*****************************************************************************************************

    /* By doing this, we had seen in the [Pointers_to_Derived_class] that, we were only able to access the
    base class functions and data members.

    BaseClass *base_class_pointer = &DC_obj; // pointing base class pointer to derived class object
    base_class_pointer->display(); */

   //******************************************************************************************************

    /* Now to cope up with the above behaviour such that; we would be able to access the derived class data and
    function members through the base class pointer; there exist VIRTUAL (LATE BINDING IMPLEMENTATION) in C++ */

    // Applying virtual keyword in the display of base class
    // Now Derived class display is executing

    BaseClass *base_class_pointer = &DC_obj;
    base_class_pointer->display();
    return 0;
}