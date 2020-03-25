#include <stdio.h>
#include <stdlib.h>

void przepisz(int n , int * w){
    *w = n;
}

int main()
{
    int n,w;
    scanf("%d %d",&n,&w);
    przepisz(n,&w);
    printf("%d %d",n,w);
    return 0;
}
