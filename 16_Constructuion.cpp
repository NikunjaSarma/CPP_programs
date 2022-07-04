#include <iostream>

using namespace std;
class Employee{
public:
    int id;
    string name;
    float salary;
    Employee(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }
    void Display(){
        cout << id << " " << name << " " << salary << endl;
    }
};
int main()
{
    Employee e1(100,"Abc",5000);
    Employee e2(300,"Xyz",6000);

    e1.Display();
    e2.Display();
    return 0;
}

// CascadiaCode
// Consolas, 'Courier New', monospace