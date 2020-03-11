#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float pierw(float x){
return sqrt(x);
}

float suma(int n){
float wynik = 0;
    for(int i=0 ; i<=n ; i++){
        wynik += pierw((float)i);
    }

    return wynik;
}

int main()
{
    int n;
    scanf("%d", &n);
    if(n < 0){
        printf("Prosze podac liczbe nieujemna");
        return 0;
    }

    printf("%f", suma(n));

    return 0;
}
