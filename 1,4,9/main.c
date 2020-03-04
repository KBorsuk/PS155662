#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,limit,wynik;
    if(n<0 || m<0){
        printf("liczby musza byc nieujemne");
        return 0;
    }

    scanf("%d %d",&n ,&m);

    if(n>m){
        limit = n;
    }else{
        limit = m;
}

    for(int i=1;i<limit;i++){
        if(n%i==0 && m%i==0){
            wynik = i;
        }
    }
    printf("%d", wynik);
    return 0;
}
