#include <iostream>
#include <list>
using namespace std;

/*
mylist.sort() // sort the elements
mylist.unique() // removes duplicate elements
mylist.clear() // clear the list
mylist.reverse() // reverse the list

*/

void display(list<int> &l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    }
}

int main()
{
    list<int> list1;
    list1.push_back(45);
    list1.push_back(993);
    list1.push_back(43);
    list1.push_back(10);
    list1.push_back(493);

    return 0;
}