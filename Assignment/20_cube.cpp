#include<iostream>
using namespace std;
int Cube(int n){
    return n * n * n;
}

void DisplayCube(){
    int n;
    cout << "The cube is " << Cube(n);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Cube(n);
    DisplayCube();
    return;
}
