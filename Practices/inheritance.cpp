#include <iostream>

using namespace std;
class shape
{
public:
    int base, height;
    void setbase(int b)
    {
        base = b;
    }
    void setheight(int h)
    {
        height = h;
    }
};
class Triangle : public shape
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
    t1.setbase(3);
    t1.setheight(5);
    cout << t1.getArea();
    return 0;
    cin.get();
}