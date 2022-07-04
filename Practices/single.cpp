#include <iostream>

using namespace std;
class Animal
{

public:
    void Eat()
    {
        cout << "\nWE eat we are aninal\n";
    }
};
class dog : public Animal
{
public:
    void Bark()
    {
        cout << "i bark";
    }
};
int main()
{
    dog d1;
    d1.Bark();
    d1.Eat();
    return 0;
    cin.get();
}