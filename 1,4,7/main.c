#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,wynik;

    scanf("%d %d",&n,&m);

    wynik = n;
    for(int i=n+1;i<m+1;i++){
        wynik = wynik * i;
    }
    printf("%d", wynik);

    return 0;
}
