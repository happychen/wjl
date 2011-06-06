#include <iostream>
#include <string.h>
using namespace std;

class Person
{
    public:
        Person()
        {
            age = 0;
        }
        Person(int a)
        {
            age = a;
        }

        int get_age()
        {
            return age;
        }
    private:
        int age;
};

int main(void)
{
    Person two;
    Person one(12);
//    Person three(one);
    two = one;
//    cout<<three.get_age()<<endl;
    cout<<two.get_age()<<endl;

    return 0;
}



