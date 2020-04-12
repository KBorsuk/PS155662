#include <stdio.h>
#include <stdlib.h>

int a(int unsigned n ,int * tab){
    for(int i=0;i<n;i++){
    tab[i] = 0;
    }
    return tab;
}

int b(int unsigned n ,int * tab){
    for(int i=0;i<n;i++){
    tab[i] = i;
    }
    return tab;
}

int c(int unsigned n ,int * tab){
    for(int i=0;i<n;i++){
    tab[i] = tab[i]*2;
    }
    return tab;
}

int d(int unsigned n ,int * tab){
    for(int i=0;i<n;i++){
    tab[i] = abs(tab[i]);
    }
    return tab;
}

int main()
{
int tab[6] = {-3,5,-8,0,-6,4};
d(6,tab);
c(6,tab);
a(6,tab);
b(6,tab);
return 0;
}
