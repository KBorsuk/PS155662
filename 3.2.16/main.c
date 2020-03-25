#include <stdio.h>
#include <stdlib.h>

void przepisz(int const * x ,int * const y){
    *y = *x;
}

int main()
{
    int x, y;
    scanf("%d %d",&x,&y);
    przepisz(&x,&y);
    printf("%d %d",x,y);
    return 0;
}
