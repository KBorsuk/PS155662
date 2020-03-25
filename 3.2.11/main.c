#include <stdio.h>
#include <stdlib.h>

int *pamiec(unsigned int n){
    return malloc(n*sizeof(int));
}

int main()
{

    printf("%p", pamiec(8));
    return 0;
}
