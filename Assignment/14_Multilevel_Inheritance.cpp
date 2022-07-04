// WAP to implement multi level inheritance

#include <iostream>
using namespace std;
class Shape
{
public:
    int length, breadth, radius;

    void setLength(int l)
    {
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }
    void setRadius(int r)
    {
        radius = r;
    }
};
class Rectangle : public Shape
{
public:
    int getArea()
    {
        return length * breadth;
    }
};
class Circle : public Rectangle
{
public:
    float getArea()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle c1;
    c1.radius = 2;
    Rectangle r1;

    r1.length = 4;
    r1.breadth = 5;

    cout << c1.getArea() << endl;
    cout << r1.getArea();
    return 0;
}