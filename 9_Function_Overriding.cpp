// WAP to implement funcion overrideing

#include <iostream>
using namespace std;
class Fish
{
public:
    void display()
    {
        cout << "Fish Family." << endl;
    }
};
class FatherFish : public Fish
{
public:
    void display()
    {
        cout << "Father Fish belong to the fish Family." << endl;
    }
};
class MotherFish : public Fish
{
public:
    void display()
    {
        cout << "Mother Fish belong to the fish Family." << endl;
    }
};
int main()
{
    Fish f1;
    FatherFish f2;
    MotherFish f3;
    f1.display();
    f2.display();
    f3.display();
    return 0;
}
