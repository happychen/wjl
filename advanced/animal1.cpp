
#include<iostream>
using namespace std;

class Animal
{
public:

        void show_info()
        {
            cout<<"weight="<<weight<<endl;
        }
        void eat()
        {
            cout<<"animal eat"<<endl;
        }
protected:
        void sleep()
        {
            cout<<"animal sleep"<<endl;
        }
private:
        void breath()
        {
             cout<<"animal breath"<<endl;
        }
        int weight;
};
class Person:public Animal
{
public:

    void walk()

    {
        cout<<"person walk"<<endl;
    }
    void test()
    {
        eat();
        sleep();
//        breath();
    }
    void show_info()
    {
        cout<<"weight="<<weight<<endl;
    }
    void eat()
    {
        cout<<"person eat"<<endl;
    }
private:
     int weight;
/*public:
        void eat()
        {
            cout<<"person eat"<<endl;
        }
        void sleep()
        {
            cout<<"person sleep"<<endl;
        }
        void breath()
        {
             cout<<"person breath"<<endl;
        }
     */
};
int main(void)
{
    Person p;
    p.eat();

    return 0;
}
