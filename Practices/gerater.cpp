#include <iostream>

using namespace std;

int main()
{
    int a, b, c, max;
    cout << "Enter 3 numbers";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else if (b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    cout << "\nThe Greatest number is " << max;
    return 0;
}