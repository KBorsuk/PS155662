#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,k;
    if(n<0 || m<0 || k<0){
        printf("liczby musza byc nieujemne");
        return 0;
    }

    scanf("%d %d %d",&n, &m, &k);

    for(int i=k/n;i*n<m;i++){
        printf("%d ", i*n);
    }

    return 0;
}
