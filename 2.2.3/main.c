#include <stdio.h>
#include <stdlib.h>

int dzielnik(int n){

    for(int k=n-1 ; k>0 ; k--){
        if(n % k == 0){
            return k;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    if(n <= 2){
        printf("Prosze podac liczbe wieksza od 2");
        return 0;
    }


    printf("%d", dzielnik(n));

    return 0;
}
