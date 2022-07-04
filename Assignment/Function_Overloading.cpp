// WAP to implement funcion overrideing
#include <iostream>
using namespace std;

int Area(int s)
{
    return s * s;
}

int Area(int l, int b)
{
    return l * b;
}

float Area(float r)
{
    return 3.14 * r * r;
}

int main()
{
    int x = 4, a = 10, b = 20, result1, result2;
    float y = 10, result3;
    result1 = Area(x);
    result2 = Area(a, b);
    result3 = Area(y);

    cout << "The area of a Square is:-" << result1 << endl;
    cout << "The area of a Rectangle is:-" << result2 << endl;
    cout << "The area of a Circle is:-" << result3 << endl;
    return 0;
}
