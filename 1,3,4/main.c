#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    if(abs(a) > abs(b)){
        printf("%d",a);
    }else{
        printf("%d",b);
    }
    return 0;
}
