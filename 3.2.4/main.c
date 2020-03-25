#include <stdio.h>
#include <stdlib.h>

void zamiana(int * x , int * y){
    if(*x<*y)
    {
    int a;
    a=*x;
    *x=*y;
    *y=a;
    }
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    zamiana(&x,&y);
    printf("%d %d",x,y);
    return 0;
}
