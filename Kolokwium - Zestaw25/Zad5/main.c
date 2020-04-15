#include <stdio.h>
#include <stdlib.h>

int foo(int unsigned n)
{
    if(n <= 1){
        return 1;
    }else if(n%2==0){
        return foo(n-2) + 1;
    }else{
        return 2*foo(n - 1) - 1;
    }

}

int main()
{
printf("%d \n", foo(2));
printf("%d \n", foo(3));
printf("%d \n", foo(4));
printf("%d \n", foo(5));
}
