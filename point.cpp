#include <iostream>

using namespace std;//命名空间

//typedef struct point
class POINT
{
    public:
    int x;
    int y;
};

int main(void)
{
    POINT pt;
    pt.x = 9;
    pt.y = 5;
    cout<<"pt.x = "<<pt.x<<endl<<"pt.y = "<<pt.y<<endl;
    return 0;
}
