#include <stdio.h>

int main()
{
    float liczba;
    scanf("%f", &liczba);
    if(liczba < 0){
        liczba = liczba - 2 * liczba;
    }
    printf("%f",liczba);
    return 0;
}
