#include <iostream>

using namespace std;
class Attibutes
{
public:
    int length, breadth, height;
    void setLength(int l)
    {
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }
    void setHeigth(int h)
    {
        height = h;
    }
};
class Rectrangle : public Attibutes
{
public:
    int getR()
    {
        return length * breadth;
    }
};

class Triangle : public Rectrangle
{
public:
    float getT()
    {
        return length * height * 0.5;
    }
};
int main()
{
    Rectrangle r1;
    Triangle t1;
    t1.setHeigth(7);
    t1.setLength(5);
    r1.setLength(3);
    r1.setBreadth(4);
    cout << "\nArea of triangle is : " << t1.getT();
    cout << "\nArea of rectangle is : " << r1.getR();
    return 0;
    cin.get();
}