#include <iostream>

using namespace std;

class Point;
class B
{
    public:
    Point inflate(Point &pt, int nOffset);
    void print()
    {}
};
class Point
{
    friend Point B::inflate(Point &pt, int nOffset);
//    friend  class B ;
    public:
    Point(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    void print()
    {
        cout<<"Point("<<x<<","<<y<<")"<<endl;
    }
    private:
    int x;
    int y;
};



Point B::inflate(Point &pt, int nOffset)
{
    pt.x += nOffset;
    pt.y += nOffset;
    return pt;
}

int main(void)
{
    Point pb(10, 20);
/*    inflate(pb, 30);
    pb.print();*/
    B b;
    b.inflate(pb, 30);
    pb.print();
    return 0;
}
