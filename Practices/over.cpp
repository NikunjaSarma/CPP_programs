#include <iostream>

using namespace std;

void Area(int s)
{
    cout << "\nArea of square is:- " << s * s << endl;
}
void Area(int h, int l)
{
    cout << "Area of rectrangle is " << h * l << endl;
}
void Area(float r)
{
    cout << "Area of circle is " << float(3.14 * r * r) << endl;
}
int main()
{
    int l = 5, b = 4, s = 9;
    float r = 3;
    Area(s);
    Area(l, b);
    Area(r);
    return 0;
    cin.get();
}