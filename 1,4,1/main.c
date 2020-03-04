#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    if(n<0 || m<0){
        printf("liczby musza byc nieujemne");
        return 0;
    }
    scanf("%d %d",&n, &m);
    for(int i=0;i*n<m;i++){
        printf("%d ", i*n);
    }

    return 0;
}
