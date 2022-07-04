#include <iostream>

int main()
{

    int input, reverse = 0, remainder;
    std::cout << "Enter a number: ";
    std::cin >> input;

    while (input != 0)
    {
        remainder = input % 10;
        reverse = reverse * 10 + remainder;
        input /= 10;
    }
    std::cout << "Reversed Number:- " << reverse << std::endl;
    return 0;
}