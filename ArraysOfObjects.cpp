#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setdata()
    {
        cout << "Enter the ID: " << endl;
        cin >> id;
    }

    void getData()
    {
        cout << "The id is: " << id << endl;
    }
};

int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;
    Employee arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i].setdata();
        arr[i].getData();
    }
    return 0;
}