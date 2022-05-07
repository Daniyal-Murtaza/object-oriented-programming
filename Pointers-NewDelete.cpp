#include <iostream>
using namespace std;

int main()
{

    // BASIC EXAMPLE:
    int a = 4;
    int *ptr = &a;

    // Address:
    cout << ptr << endl; // 0x61fe1c
    cout << &a << endl;  // 0x61fe1c

    // Value:
    cout << *(ptr) << endl; // 4
    cout << a << endl;      // 4

    // NEW Keyword/Operator:
    int *pointer = new int(40);
    cout << "value at ptr: " << *(pointer) << endl;
    cout << pointer << endl;

    // MAKING ARRAY DYNAMICALLY
    int *arr = new int[2];
    arr[0] = 65;
    *(arr + 1) = 708; // this syntax can be used as well
    arr[2] = 76;
    cout << "new" << endl;
    cout << "arr[0]: " << arr[0] << endl;
    cout << "arr[1]: " << arr[1] << endl;
    cout << "arr[2]: " << arr[2] << endl;

    // DELETE Keyword/Operator:
    delete[] arr;
    cout << "delete" << endl;
    cout << "arr[0]: " << arr[0] << endl;
    cout << "arr[1]: " << arr[1] << endl;
    cout << "arr[2]: " << arr[2] << endl;

    return 0;
}