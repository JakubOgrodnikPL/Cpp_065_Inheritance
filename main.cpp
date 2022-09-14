#include <iostream>
#include <math.h>

using namespace std;

class Point
{
    float x,y;
    string name;

public:
    void show()
    {
        cout<<name<<"("<<x<<","<<y<<")"<<endl;
    }
    Point(string n="S", float a=0, float b=0)
    {
        name=n;
        x=a;
        y=b;
    }
};

class Circle :public Point
{
    float r;
    string name;

public:
    void show()
    {
        cout<<"Circle: "<<name<<endl;
        cout<<"Center of the circle: "<<endl;
        Point::show();
        cout<<"Radius: "<<r<<endl;
        cout<<"Area of the circle: "<<M_PI*r*r<<endl;
    }

    Circle(string nc="Circle", string np="S", float a=0, float b=0, float ra=1)
    :Point(np,a,b)
    {
        name=nc;
        r=ra;
    }
};

int main()
{
    Circle c1;
    c1.show();
    return 0;
}
