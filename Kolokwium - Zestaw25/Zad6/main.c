#include <stdio.h>
#include <stdlib.h>

int foo(int unsigned n, int * tab )
{
    int wynik = -1;
    int temp = 0;
    for(int i=0; i<n;i++){
        if(tab[i]%2==0 && tab[i] >= tab[temp]){
            wynik = i;
            temp = i;
        }
    }
    return wynik;
}

int main()
{
int tab1[5] ={1,3,5,7,9};
int tab2[5] ={20,2,4,6,8};
int tab3[5] ={4,8,0,4,6};
int tab4[5] ={4,5,0,4,60};
printf("%d\n" , foo(5,tab1));
printf("%d\n" , foo(5,tab2));
printf("%d\n" , foo(5,tab3));
printf("%d\n" , foo(5,tab4));
}
