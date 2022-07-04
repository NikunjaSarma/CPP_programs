#include <iostream>
using namespace std;
class Shape
{
public:
    int base, height;
    void setBase(int b)
    {
        base = b;
    }
    void setHeight(int h)
    {
        height = h;
    }
};
class Triangle : public Shape
{
public:
    float getArea()
    {
        return 0.5 * base * height;
    }
};
int main()
{
    Triangle t1;
    t1.setBase(6);
    t1.setHeight(6);
    cout << "The area of the triangle is: " << t1.getArea();
    return 0;
}