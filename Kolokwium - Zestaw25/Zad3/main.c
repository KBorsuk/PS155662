#include <stdio.h>
#include <stdlib.h>

int foo(int unsigned n)
{
    for(int i=0; i<n;i++){
        if(i*i*i >= n ){
            return i;
        }
    }
    return 0;
}

int main()
{
printf("%d \n", foo(3));
printf("%d \n", foo(5));
printf("%d \n", foo(10));
printf("%d \n", foo(27));
}
