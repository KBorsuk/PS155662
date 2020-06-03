#include <stdio.h>
#include <stdlib.h>

int foo(int a)
{
    return a+5;
}

int main()
{
    int tab[4][4] = {{1,1,5,-2},{7,1,1,5},{-8,4,1,2}, {-9,-8,-2,-3}};
    int a = sizeof(int*); //a=4
    int * p = tab+1; //p=60fec8 , *p =7
    int r = *(*(tab+2)-1)+foo(5); // r=15 , &r=60feb4
    *p=foo(*p); //p=60feb8 , **p =brak dostepu
    r= *(*(tab+1)+4); // r=-8 , &r=60feb4
    return 0;
}
