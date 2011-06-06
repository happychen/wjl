#include <iostream>
using namespace std;

class Animal
{
public:
#if 0    
    Animal(int weit)
    {
        weight = weit;
        cout<<"Animal construct"<<endl;
    }
    ~Animal()
    {
        cout<<"Animal distruct"<<endl;
    }
#endif    
    void test()
    {
        cout<<"Animal: weight = "<<weight<<endl;
        breath();
    }
   virtual  void eat()
   // virtual void eat(int a = 0)
    {
        int b = a;
        cout<<"animal eat:"<<b<<endl;
    }
protected:
    void sleep()
    {
        cout<<"animal sleep"<<endl;
    }
private:
    int weight;
    void breath()
    {
        cout<<"animal breath"<<endl;
    }
};

class Person:public Animal
{
public:
#if 0
    Person(int weit, int wg):Animal(wg)
    {
        weight = weit;
        cout<<"Person construct"<<endl;
        cout<<"person: weight = "<<weight<<endl;
    }
    ~Person()
    {
        cout<<"Person distruct"<<endl;
    }
#endif
    void walk()
    {
        cout<<"animal walk"<<endl; 
    }
/*    void eat(int a = 0)
    {
        int b = a;
        cout<<"person eat"<<b<<endl;
    }*/
private:
    int weight;
};

int main(void)
{
    //Animal an;
    //an.eat(4);
    //Person p;
    //p.eat();
   // Person p(123, 23);
    //an.test();
    Animal *p;
    /*p = &an;
    p->eat();*/
    Person b;
    b.eat(3);
    p = &b;
    p->eat();
    //p.test();

    return 0;
}
