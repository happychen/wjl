#include<iostream>

using namespace std;
//typedef struct point
class Point
{
private:
       int x;
       int y;
public:
    /*   void init(int a ,int b)
       {
            x = a;
            y = b;
       }*/
       Point()//构造
       {x = 5,y = 9;}
       ~Point()//析构
       {}
       void show_point()
       {
       cout<<"pt.x="<<x<<endl<<"pt.y="<<y<<endl;
       }
};
int main(void)
{
    Point pt;
   // pt.x = 9;
   // pt.y = 5;
/*    pt.init(9,5);*/
    pt.show_point();
    return 0;
}
