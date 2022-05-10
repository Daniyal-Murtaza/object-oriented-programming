#include <iostream>
#include <vector>
using namespace std;

// Array is not reziable.
// You have to create new array to change size of an array.
// Vector is resizable
template <class T>

void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    // ways to create a vector
    vector<int> vec1; // zero length vector
    // display(vec1);
    // vector<char> vec2(4); // four element character vector
    // vec2.push_back('5');
    // display(vec2);
    // vector<char> vec3(vec2); // four element character vector from vec2
    // display(vec3);

    int element;
    int size;
    cin >> size;

    // push_back : Add element at the end (takes 1 arguement)
    // size : returns size of vector (takes no arguement)
    // pop_back : pop the last element (takes no arguement)
    // insert: insert the element at the specified position (iter, how much time you want to insert, element to be inserted)
    // at: returns element at the position (takes 1 arguement)
    // clear: it clears the element of the vector

    for (int i = 0; i < size; i++)
    {

        cout << "Enter element";
        cin >> element;
        vec1.push_back(element);
    }
    // vec1.pop_back();
    // display(vec1);

    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter+3, 3, 566);
    // display(vec1);

    // cout << vec1.size();
    // vec1.clear();

    vector<int> vec2;
    vec2.push_back(373);
    vec2.push_back(32);
    vec2.push_back(3392);
    vec1.swap(vec2);

    display(vec1);

    return 0;
}