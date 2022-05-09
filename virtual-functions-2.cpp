#include <iostream>
using namespace std;

class Exam
{
protected:
    int rollNo;
    int sheetNo;

public:
    Exam() {}

    Exam(int rollNo, int sheetNo)
    {
        this->rollNo = rollNo;
        this->sheetNo = sheetNo;
    }

    virtual void display()
    {
        cout << "Roll no: " << rollNo << endl;
        cout << "Sheet no: " << sheetNo << endl;
    }
};

class Student : virtual public Exam
{
protected:
    int visit_time;
    int end_time;

public:
    Student() {}

    Student(int visit_time, int end_time)
    {
        this->visit_time = visit_time;
        this->end_time = end_time;
    }

    Student(int rollNo, int sheetNo, int visit_time, int end_time) : Exam(rollNo, sheetNo)
    {
        this->visit_time = visit_time;
        this->end_time = end_time;
    }

    virtual void display()
    {
        Exam::display();
        cout << "Visit time: " << visit_time << endl;
        cout << "end time: " << end_time << endl;
    }
};

class Result : virtual public Exam, public Student
{
private:
    float math_marks;
    float phy_marks;

public:
    Result(int rollNo, int sheetNo, int visit_time, int end_time, int math_marks, int phy_marks) : Exam(rollNo, sheetNo), Student(visit_time, end_time)
    {
        this->math_marks = math_marks;
        this->phy_marks = phy_marks;
    }

    void display()
    {
        Student::display();
        cout << "maths marks: " << math_marks << endl;
        cout << "Physics marks: " << phy_marks << endl;
    }
};

int main()
{
    Exam e(42, 7282);
    Student s(42, 7282, 12, 3);
    Result r(42, 7282, 12, 3, 91, 94);
    Exam *exam_ptr = &r;
    exam_ptr->display();
    return 0;
}