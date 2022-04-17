#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    int a, b;

public:
    Point()
    {
        a = 0;
        b = 0;
    }

    Point(int x, int y)
    {
        a = x;
        b = y;
    }

    void print()
    {
        cout << "(" << a << " , " << b << ")" << endl;
    }

    friend void distance(Point p1, Point p2);
};

void distance(Point p1, Point p2)
{
    double dist = sqrt((p1.a - p2.a) * (p1.a - p2.a) + (p1.b - p2.b) * (p1.b - p2.b));
    cout << "Distance is: " << dist << endl;
}

int main()
{
    Point p1(4, 5);
    Point p2(3, 2);
    p1.print();
    p2.print();
    distance(p1, p2);
    return 0;
}