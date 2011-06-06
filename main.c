#include <stdio.h>

int main(void)
{
    int a = 300;
    int b = 10;
    char *p;
    p= &a;
    char *q;
    q= &b;
    printf("%d\t%d\n", *p, *q);
}
