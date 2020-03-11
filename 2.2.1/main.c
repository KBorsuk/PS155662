#include <stdio.h>
#include <stdlib.h>

int bezw(int x){
    if(x<0){
        x = -x;
    }
    return x;
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", bezw(a));

    return 0;
}
