#include <iostream>
#include <string>
using namespace std;

// By default variable is private in class. String s is private

// By doing nesting, it will automatically perform the nested function on obj given in the main.
// A way through which a function will be called automatically.

class binary
{
private:
    string s;
    void check();

public:
    void read();
    // void check();
    void one_comp();
    void display();
};

void binary::read()
{
    cout << "Enter the string: " << endl;
    cin >> s;
}

void binary::check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Not a binary number!";
            exit(0);
        }
    }
}

void binary::one_comp()
{
    // Nesting of member function
    check();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    // b.check();   //Nested above
    b.one_comp();
    b.display();

    return 0;
}