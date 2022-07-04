#include <iostream>
int main()
{
    int a = 0, b = 1;
    int c, n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 0; i <= n; i++)
    {
        std::cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}