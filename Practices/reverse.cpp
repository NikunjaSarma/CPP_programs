#include <iostream>

using namespace std;

int main()
{
    int i, rev = 0, rem;
    cout << "Enter a number:- ";
    cin >> i;
    do
    {
        rem = i % 10;
        rev = (rev * 10) + rem;
        i = i / 10;
    } while (i != 0);
    cout << "Therefore the required numner is:- " << rev;
    return 0;
    cin.get();
}