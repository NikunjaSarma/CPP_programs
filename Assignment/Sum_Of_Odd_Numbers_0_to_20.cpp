// WAP to to find the summation of odd number between 0 to 20
#include <iostream>
using namespace std;
int main()
{
    int sum = 20;
    cout << "The odd numbers are: ";
    for (int i = 0; i < 20; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
            sum = sum + i;
        }
    }
    cout << "\nThe sum is: " << sum;
    return 0;
}
