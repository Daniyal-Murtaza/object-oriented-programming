#include <iostream>
#include <cstring>
using namespace std;

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

    virtual void display() {}
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
    CWHVideo vid("django", 45.89, 4.23);
    vid.display();
    cout << endl;

    CWHText tex("pypy", 422.289, 4.19);
    vid.display();

    // making base class (CWH) pointer:
    CWH *BC_ptr[2];

    return 0;
}