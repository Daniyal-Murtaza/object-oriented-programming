#include <iostream>
using namespace std;

// Forward declaration
class Y;

class X
{
    int data;

public:
    void setdata(int a)
    {
        data = a;
    }
    friend void sum(X, Y);
};

class Y
{
    int num;

public:
    void setdata(int b)
    {
        num = b;
    }
    friend void sum(X, Y);
};

void sum(X a, Y b)
{
    cout << "The sum of data variable in X and num variable in Y is: " << a.data + b.num << endl;
}

int main()
{
    X a;
    Y b;
    a.setdata(5);
    b.setdata(9);
    sum(a, b);
    return 0;
}