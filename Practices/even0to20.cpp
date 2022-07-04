#include <iostream>

using namespace std;

int main()
{
    int sum;
    cout << "The even numbers between 0 to 20 are : ";
    for (int i = 0; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << ",";
            sum = sum + i;
        }
    }
    return 0;
    cin.get();
}