#include <stdio.h>
#include <stdlib.h>

float a(int unsigned n ,int * tab){
    float suma = 0;
    for(int i=0;i<n;i++){
        suma += tab[i];
    }
    return suma /= n;
}

int b(int unsigned n ,int * tab){
    int suma = 0;
    for(int i=0;i<n;i++){
        suma += tab[i];
    }
    return suma ;
}

int c(int unsigned n ,int * tab){
    int suma = 0;
    for(int i=0;i<n;i++){
        suma += tab[i]*tab[i];
    }
    return suma ;
}


int main()
{
int tab[6] = {-3,5,-8,0,-6,4};
printf("%f\n",a(6,tab));
printf("%d\n",b(6,tab));
printf("%d\n",c(6,tab));
return 0;
}
