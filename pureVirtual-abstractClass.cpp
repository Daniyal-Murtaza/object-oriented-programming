#include <iostream>
#include <cstring>
using namespace std;

// Abstract base class and PURE virtual function are inter related to each other
// Pure Virtual functions are used to form abstract classes.
// Abstract base class is those which contains ATLEAST ONE PURE VIRTUAL FUNCTION.
// Abstract base class -> Mtlb we will form a base class but the word will be done in the derived classes.
// like:
// virtual void display() = 0 in base class -----> means do nothing in base class (work will be done in derived class)
// void display() in derived classes ------> will ovveride the base class void display()

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string title, float rating)
    {
        this->title = title;
        this->rating = rating;
    }

    virtual void display() = 0; // Do-nothing function ---> pure virtual function
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float videoLength) : CWH(s, r)
    {
        this->videoLength = videoLength;
    }

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Ratings: " << rating << endl;
        cout << "video length: " << videoLength << endl;
    }
};

class CWHText : public CWH
{
    float words;

public:
    CWHText(string s, float r, float words) : CWH(s, r)
    {
        this->words = words;
    }

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Ratings: " << rating << endl;
        cout << "Words: " << words << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    float words;

    // for video
    title = "django vid";
    rating = 45.89;
    vlen = 4.23;

    CWHVideo vid(title, rating, vlen);
    // vid.display();

    // for text
    title = "django text";
    rating = 78.39;
    words = 4.19;

    CWHText tex(title, rating, words);
    // tex.display();

    // making base class pointers and pointing it towards derived classes object
    CWH *tut[2];
    tut[0] = &vid;
    tut[1] = &tex;

    // see the result with and without virtual keyword in Line 18

    tut[0]->display();
    cout << endl;
    tut[1]->display();

    return 0;
}

/*
Rules for virtual functions:
1- They cannot be static
2- They are accessed by object pointer
3- Virtual function can be a friend of another class
4- A fucntion in base class can might not be used like **virtual void display() in current class**
5- If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
6- If one of the derived class do not have the display function then in place of derived class, base class display
   function will be called (I M SPECIFICALLY TALKING ABOUT THIS CODE)
*/