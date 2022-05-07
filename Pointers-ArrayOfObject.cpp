#include <iostream>
using namespace std;

class ShopItem
{
    int id, price;

public:
    void set_data(int i, int p)
    {
        id = i;
        price = p;
    }

    void print_data()
    {
        cout << "id: " << id << endl;
        cout << "price: " << price << endl;
    }
};

int main()
{
    int size = 3;

    // A mall conatins:

    // 1 - general store item
    // 2 - veggies item
    // 3 - hardware item

    /*
        1            2         3
        ^            ^         ^
        |            |         |
        |            |         |

    ptr ------------->----------->
    (vary)

    ptr_temp
    (fix on 1)

    */

    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptr_temp = ptr;
    int p, q, i;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter id and price of item: " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).set_data(p, q);
        ptr->set_data(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "The id and price of item " << i + 1 << " is" << endl;
        ptr_temp->print_data();
        ptr_temp++;
    }

    return 0;
}