#include <stdio.h>
#include <stdlib.h>

int * mniejsza(int * x , int * y){
    if(*x<*y){
        return x;
    }
    return y;
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%p", mniejsza(&x,&y));
    return 0;
}
