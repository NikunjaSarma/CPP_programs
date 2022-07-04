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
class triangle : public shape
{
public:
    float getArea()
    {
        return 0.5 * base * height;
    }
};
int main()
{
    triangle t1;
    t1.setbase(10);
    t1.setheight(12);
    cout << t1.getArea();
    return 0;
    cin.get();
}