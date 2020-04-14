#include <stdio.h>
#include <stdlib.h>

int foo(int unsigned m, int unsigned n, int unsigned k){
    for(int i=m+1; i<k; i++){
        if(i%n==0){
            printf("%d ", i);
        }
    }
}

int main()
{
    foo(4,20,100);
    return 0;
}
