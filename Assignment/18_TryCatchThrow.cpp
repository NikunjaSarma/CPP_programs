#include <iostream>
int main()
{
    int a, b, c;
    std::cout << "Enter Numarator: ";
    std::cin >> a;
    std::cout << "Enter Denominator: ";
    std::cin >> b;
    try
    {
        if (b == 0)
            throw b;
        else
        {
            c = a / b;
            std::cout << "Result: " << c;
        }
    }
    catch (int x)
    {
        std::cout << "Cannot divide by Zero";
    }

    return 0;
}
