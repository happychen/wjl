#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a+b;
}
float add (float a, float b)
{
    return a+b;
}
int main()
{
    cout<<add(1, 2)<<endl<<add(2.1, 3.14)<<endl;
    return 0;
}
