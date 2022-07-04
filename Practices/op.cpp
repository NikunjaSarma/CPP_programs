#include <iostream>
using namespace std;
class Test
{
public:
    int num;

public:
    Test()
    {
        num = 5;
    }
    void operator++()
    {
        num = num + 10;
    }
    void print()
    {
        cout << "the count is: " << num << endl;
    }
};
int main()
{
    Test obj;
    ++obj;
    obj.print();
    return 0;
}