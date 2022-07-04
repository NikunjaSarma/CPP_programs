#include <iostream>
using namespace std;

int main()
{

    char op;
    float num1, num2;
    cout << "Enter number the first number" << endl;
    cin >> num1;
    cout << "Enter the operator" << endl;
    cin >> op;
    cout << "Enter the second number" << endl;
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << (num1 + num2);
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << (num1 - num2);
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << (num1 * num2);
        break;

    case '/':
        if (num2 != 0)
        {
            cout << num1 << " / " << num2 << " = " << (num1 / num2);
        }

        else
            cout << "0 is not divisible";
        break;

    default:
        cout << op << " is not an operator";
        break;
    }
    return 0;
}