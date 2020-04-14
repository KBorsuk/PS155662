#include <stdio.h>
#include <stdlib.h>

int foo(int n,int m){
    if (m==0){
        return 2;
    }else if (n==0){
        return -1;
    }
    return foo(n-1,m) + foo(n,m-1) + 7;
}

int main()
{
    printf("%d ", foo(0,4));
    printf("%d ", foo(2,2));
    printf("%d ", foo(5,2));
    return 0;
}
