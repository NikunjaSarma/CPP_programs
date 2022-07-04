#include <iostream>

using namespace std;

class Length
{
public:
    int length;
    void setLength(int l)
    {
        length = l;
    }
};
class Breadth
{
public:
    int breadth;
    void setBreadth(int b)
    {
        breadth = b;
    }
};

class Rectrangle : public Length, public Breadth
{
public:
    int getR()
    {
        return length * breadth;
    }
};
int main()
{
    Rectrangle r1;
    r1.setLength(7);
    r1.setBreadth(6);
    cout << r1.getR();
    return 0;
    cin.get();
}