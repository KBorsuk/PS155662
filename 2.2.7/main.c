#include <stdio.h>
#include <stdlib.h>

float potega(float n, float m){
    if(m==0)
    {
        return 1;
    }
    else if(m<0)
    {
    float x = n;
    for(float i=0;i>m+1;i--){
        x = x*n;
    }
    float wynik = 1/x;
    return wynik;
    }

    float wynik = n;
    for(float i=0;i<m-1;i++){
        wynik = wynik*n;
    }

    return wynik;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    if(n == 0 && m == 0){
        printf("Nie moga byc obie liczby zerowe");
        return 0;
    }

    printf("%f", potega((float)n,(float)m));

    return 0;
}
