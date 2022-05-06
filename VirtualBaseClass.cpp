#include <iostream>
using namespace std;

// Student  ---> Test [Done]
// Student  ---> Sports [Done]
// Test ---> Result
// Sports ---> Result

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
        cout << "Roll No: " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths_marks, physics_marks;

public:
    void get_marks(float m, float p)
    {
        maths_marks = m;
        physics_marks = p;
    }

    void set_marks()
    {
        cout << "maths: " << maths_marks << endl;
        cout << "physics: " << physics_marks << endl;
    }
};

class Sports : virtual public Student
{
protected:
    int score;

public:
    void get_score(int s)
    {
        score = s;
    }

    void set_score()
    {
        cout << "The score is: " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display_total()
    {
        total = maths_marks + physics_marks + score;
        set_roll_no();
        set_score();
        set_marks();
        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    Result Daniyal;
    Daniyal.get_roll_no(6880);
    Daniyal.get_marks(89.3, 38.0);
    Daniyal.get_score(99);
    Daniyal.display_total();
    return 0;
}