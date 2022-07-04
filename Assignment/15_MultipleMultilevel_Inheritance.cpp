// WAP to find area of a triangle, rectangle and circle by inheriting a class shape (you are required to impliment inheritance multiple and multilevel)
#include <iostream>
using namespace std;
class Shape
{
public:
    int length, height, breadth, radius;
    void setLength(int l)
    {
        length = l;
    }
    void setHeight(int h)
    {
        height = h;
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
    int getR()
    {
        return length * breadth;
    }
};
class Triangle : public Shape
{
public:
    float getT()
    {
        return 0.5 * breadth * height;
    }
};
class Circle : public Shape
{
public:
    int getC()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Rectangle r1;
    r1.setBreadth(5);
    r1.setLength(4);

    Triangle t1;
    t1.setBreadth(6);
    t1.setHeight(7);

    Circle c1;
    c1.setRadius(10);

    cout << "The area of the Rectangle is: " << r1.getR() << endl;
    cout << "The area of the Triangle is: " << t1.getT() << endl;
    cout << "The area of the Circle is: " << c1.getC() << endl;
    return 0;
}
