#include <stdio.h>
#include <stdlib.h>

void foo(int*a1,int*b1,int*c1){
    int tmp = *c1;
    *c1 = *b1;
    *b1 = *a1;
    *a1 = tmp;
}

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d %d \n", a, b, c);
    foo(&a,&b,&c);
    printf("%d %d %d", a, b, c);
    return 0;
}
