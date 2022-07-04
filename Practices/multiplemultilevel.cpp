#include <iostream>
using namespace std;
class Shape
{
public:
    int height, base, radius;
    void setHeight(int h)
    {
        height = h;
    }
    void setBase(int b)
    {
        base = b;
    }
    void setRadius(int r)
    {
        radius = r;
    }
};
class Triangle : public Shape
{
public:
    int breadth;

    void setBreadth(int bth)
    {
        breadth = bth;
    }

    float getT()
    {
        return 0.5 * base * height;
    }
};
class Circle : virtual public Triangle
{
public:
    int length;
    void setLength(int l)
    {
        length = l;
    }
    float getC()
    {
        return 3.14 * radius * radius;
    }
};
class Rectrangle : public Circle, virtual public Triangle
{
public:
    int a;
    int getR()
    {
        return length * breadth;
    }
};
int main()
{
    int h = 2, b = 4, br = 7, l = 8;
    float r = 3;
    Triangle t1;
    t1.setHeight(h);
    t1.setBase(b);
    Rectrangle r1;
    r1.setLength(l);
    r1.setBreadth(br);
    Circle c1;
    c1.setRadius(3);
    cout << "\nThe area of Rectrangle is " << r1.getR();
    cout << "\nThe area of Circle is " << c1.getC();
    cout << "\nThe area of Triangle is " << t1.getT();
    return 0;
}
// Output :-
// The area of Rectrangle is 56
// The area of Circle is 28.26
// The area of Triangle is 4