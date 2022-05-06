#include <iostream>
using namespace std;

// Base class
class Employee
{

public:
    int id;
    float salary;
    Employee() {}
    Employee(int i)
    {
        id = i;
        salary = 24.02;
    }
};

// Private members of base class can never inherited DIRECTLY.
// 1st Method: To access the private member of base class INDIRECTLY - make get_data(){return id;} and then call get_data where you need it's value
// 2nd Method: Protected ----> a private variable that can be inherited in derived classes (it's table is written in the copy)
// Public: Public Members of base ----> public members of derived
// Private: Public Members of base ----> public members of derived

// Derived class
class Programmer : public Employee
{
public:
    int lang = 4;
    Programmer(int i)
    {
        id = i;
    }

    void get_data()
    {
        cout << id;
    }
};

int main()
{
    Employee Daniyal(1);
    Employee Minhal(2);
    cout << Daniyal.salary << endl;
    cout << Minhal.salary << endl;
    Programmer harry(7);
    harry.get_data();
    cout << endl;
    cout << harry.lang << endl;
    return 0;
}