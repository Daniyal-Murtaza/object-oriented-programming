#include <iostream>
using namespace std;

// Multilevel Inheritance A--->B--->C

class Student
{
protected:
    int roll_no;

public:
    void get_roll_no(int r)
    {
        roll_no = r;
    }

    void set_roll_no()
    {
        cout << "roll no: " << roll_no << endl;
    }
};

class Exam : public Student
{
protected:
    int maths_marks;
    int physics_marks;

public:
    void get_marks(int m, int p)
    {
        maths_marks = m;
        physics_marks = p;
    }

    void set_marks()
    {
        cout << "maths marks: " << maths_marks << endl;
        cout << "physics marks: " << physics_marks << endl;
    }
};

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        set_roll_no();
        set_marks();
        cout << "The percentage is :" << (maths_marks + physics_marks) / 2 << endl;
    }
};

int main()
{
    Result Daniyal;
    Daniyal.get_roll_no(6880);
    Daniyal.get_marks(95, 98);
    Daniyal.display();
    return 0;
}