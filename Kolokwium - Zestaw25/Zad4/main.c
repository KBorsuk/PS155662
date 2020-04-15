#include <stdio.h>
#include <stdlib.h>

int fun1(int n)
{
    return n;
}

int fun2(int n)
{
    return n;
}

int funkcja(int (* f1)(int), int (* f2)(int), unsigned int n)
{
    for(int i = 0; i <= 4*n; i++)
    {
        if(f1(i) == f2(i) && n%2==1)
            return 1;
    }
    return 0;
}

int main()
{
    printf("%d \n", funkcja(&fun1,&fun2,4));
    printf("%d \n", funkcja(&fun1,&fun2,3));
    return 0;
}
