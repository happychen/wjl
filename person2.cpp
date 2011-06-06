#include <iostream>
#include <string.h>
using namespace std;

class Person
{
    public:
        Person()
        {
            name = NULL;
        }
        Person(char *str)
        {
            name = new char[strlen(str) + 1];
            //name = str;
            strcpy(name, str);
        }
        Person(Person &x)//默认拷贝构造函数
        {
            this->name = new char[strlen(x.name) + 1];
            strcpy(this->name, x.name);
        }

        ~Person()
        {
            if(name)
            {
                delete []name;
                name = NULL;
            }
        }

        char *get_name()
        {
            return name;
        }
    private:
        char *name;
};

int main(void)
{
    char *p = new char[12];
    strcpy(p, "phoebe");
    Person one(p);
    Person two(one);//默认拷贝构造函数 Person(Person &x)引用
    //two = one;
    //cout<<one.get_name()<<endl;
    delete []p;
    p = NULL;
    cout<<two.get_name()<<endl;

    return 0;
}



