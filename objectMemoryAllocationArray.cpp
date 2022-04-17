#include <iostream>
using namespace std;

// Using arrays

class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter();
    void setData();
    void getData();
};

void Shop::initCounter()
{
    counter = 0;
}

void Shop::setData()
{
    cout << "Enter Item ID: " << endl;
    cin >> itemID[counter];
    cout << "Enter Item Price: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::getData()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Item ID: " << itemID[i] << endl;
        cout << "Item Price: " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop S;
    S.initCounter();
    S.setData();
    S.setData();
    S.setData();
    S.setData();
    S.getData();
    return 0;
}