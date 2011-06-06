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
        ~Person()
        {
            if(!name)
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
    Person two;
    //cout<<one.get_name()<<endl;
    delete []p;
    p = NULL;
    cout<<one.get_name()<<endl;

    return 0;
}



