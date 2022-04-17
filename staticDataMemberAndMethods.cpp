#include <iostream>
using namespace std;

// class Employee
// {
//     int id;
//     int count;

// public:
//     void setData()
//     {
//         cout << "Enter the ID: " << endl;
//         cin >> id;
//         count++;
//     }

//     void getData()
//     {
//         cout << "The ID is: " << id << endl;
//         cout << "The count is: " << count << endl;
//     }
// };

// int main()
// {
//     Employee obj1, obj2, obj3;
//     obj1.setData();
//     obj1.getData();

//     obj2.setData();
//     obj2.getData();

//     obj3.setData();
//     obj3.getData();
//     return 0;
// }

// Output:
// Enter the ID:
// 23
// The ID is: 23
// The count is: 1
// Enter the ID:
// 25
// The ID is: 25
// The count is: 1
// Enter the ID:
// 78
// The ID is: 78
// The count is: 1

// Which means the count variable is separate for all the variable

//************************************************************************************************************

// To cope up with that STATIC keyword is used to declare the variable of global for example
// the count is 1 for object 1 then for second time this count will update to 2,
// while fore non static there is as such no case
// they are also called as the class variable

// static can be data member(variables) or function members.

// static function members are used that has acces to only static  data member (variables)

class Employee
{
    int id;
    // count is the static data member
    static int count;

public:
    // getcount is the static function member
    static void getcount()
    {
        // cout << id;    // It will never happen because getcount is static and only static data member can come in it
        cout << "The count of getcount static data memebr is: " << count << endl;
    }

    void setData()
    {
        cout << "Enter the ID: " << endl;
        cin >> id;
        count++;
    }

    void getData()
    {
        cout << "The ID is: " << id << endl;
        cout << "The count is: " << count << endl;
    }
};

// Initialzattion of count (By default static variable is initialized with zero)
int Employee ::count = 1000;

int main()
{
    Employee obj1, obj2, obj3;
    obj1.setData();
    obj1.getData();
    obj1.getcount();

    obj2.setData();
    obj2.getData();
    obj2.getcount();

    obj3.setData();
    obj3.getData();
    obj3.getcount();
    return 0;
}

// OUTPUT:

// Enter the ID:
// 88
// The ID is: 88
// The count is: 1
// Enter the ID:
// 80
// The ID is: 80
// The count is: 2
// Enter the ID:
// 329
// The ID is: 329
// The count is: 3
