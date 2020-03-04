#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,suma = 0;
    if(n<0){
        printf("liczby musza byc nieujemne");
        return 0;
    }

    scanf("%d",&n);

    for(int i=0;i<n+1;i++){
        suma = suma + pow(i,2);
    }
    printf("%d", suma);

    return 0;
}
