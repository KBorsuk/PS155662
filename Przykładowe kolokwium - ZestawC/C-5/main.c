#include <stdio.h>
#include <stdlib.h>

int najmniejzy(int * tab){
    int wynik = tab[0];
    for(int i = 1; i < 6; i++){
        if(wynik > tab[i]){
            wynik = tab[i];
        }
    }
    return wynik;
}

int foo( int * tab1,int * tab2){
    if (najmniejzy(tab1)==najmniejzy(tab2)){
        return 1;
    }
    return 0;
}

int main()
{
    int tab1[5] = {1,3,5,7,9};
    int tab2[5] = {2,4,6,8,1};
    printf("%d",foo(tab1,tab2));

    return 0;
}
