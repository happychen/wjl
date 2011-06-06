#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(void)
{
    int i = 3;
    int j = 4;
    swap(i, j);
    cout<<"i = "<<i<<endl<<"j = "<<j<<endl;
}
