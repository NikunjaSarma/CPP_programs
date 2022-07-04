// WAP to print even numbers 0 to 20 using loop
#include <iostream>
using namespace std;

int main()
{
    cout << "The even numbers are: ";
    for (int i = 0; i <= 20; i++)
    {
        if (i % 2 == 0)
            cout << i << " ";
    }

    return 0;
}