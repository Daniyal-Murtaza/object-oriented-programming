#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    void set_data(int alpha, int beta, int gamma);
    void get_data();
};

void Employee::set_data(int alpha, int beta, int gamma)
{
    a = alpha;
    b = beta;
    c = gamma;
}

void Employee::get_data()
{
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The value of c is: " << c << endl;
    cout << "The value of d is: " << d << endl;
    cout << "The value of e is: " << e << endl;
}

int main()
{
    Employee obj;
    // Cannot acces private variable by obj.var
    obj.d = 157;
    obj.e = 4385;
    obj.set_data(5, 6, 7);
    obj.get_data();
    return 0;
}