#include <iostream>
using namespace std;

class Simple
{
private:
    int data1, data2;

public:
    Simple(int a, int b = 7) //---> default value of b is 7.
    {
        data1 = a;
        data2 = b; //---> means if no value is passed to b then it's defult value will be 7. (not zero)
    }
    void print()
    {
        cout << "The value of data1 is: " << data1 << " and data2 is: " << data2 << endl;
    }
};

int main()
{
    // Simple s(6, 10); -------> output: The value of data1 is: 6 and data2 is: 10
    // s.print();

    Simple s(6); // ---------> output: The value of data1 is: 6 and data2 is: 7
    s.print();
    return 0;
}