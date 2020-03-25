#include <stdio.h>
#include <stdlib.h>

int *pamiec(){
    return malloc(sizeof(int));
}

int main()
{

    printf("%p", pamiec());
    return 0;
}
