#include <stdio.h>
#include <stdlib.h>

int fun1(int n)
{
    return n;
}

int fun2(int n)
{
    return 2+n;
}

int funkcja(int (* f1)(int), int (* f2)(int), unsigned int n)
{
    for(int i = 0; i <= n; i++)
    {
        if(f1(i) != f2(i))
            return 3;
    }
    return 4;
}

int main()
{
    printf("%d \n", funkcja(&fun1,&fun2,4));
    return 0;
}
