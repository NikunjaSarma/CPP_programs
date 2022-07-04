// Design a class "room" with the following length = 20 width = 15 and simply display thr area
#include <iostream>
using namespace std;
class room{
public:
int length,width;
};
int main()
{
    room class1;
    class1.length=20;
    class1.width=15;
    int result= class1.length*class1.width;
    cout<<"Area of the class is: "<<result;
    return 0;
}
