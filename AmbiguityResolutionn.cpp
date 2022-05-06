#include <iostream>
using namespace std;

// The situation where both parent classes have a function or variable with same name then use ambiguity resolution
// operator......On line 32 Base_A::greet();

class Base_A
{

public:
    void greet()
    {
        cout << "hello hello" << endl;
    }
};

class Base_B
{

public:
    void greet()
    {
        cout << "Konichiwaaaaa senpai!" << endl;
    }
};

class Derived_C : public Base_A, public Base_B
{
public:
    void greet()
    {
        Base_A::greet();
    }
};

int main()
{
    Derived_C Derived_obj;
    Derived_obj.greet();

    return 0;
}