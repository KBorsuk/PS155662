#include <stdio.h>
#include <stdlib.h>

void foo(int* tab, int n)
{
    for(int i=0;i<n;i++)
    {
        *(tab+i)+=-1;
    }
}

int main()
{
    int tab[] = {1,-1,3,2,9,8};
    int *wsk=tab-2;
    foo(wsk,5);
    int b = *(wsk+=4); //b=
    int c = b+3; // b=  , c=
    int d = b^c; // b=  , c=  , d=
    int e = (wsk+=-1)[2]; // b=  , c=  , d=  , e=
    e = (d *= 4) + (c /= 3); // b=  , c=  , d=  , e=
    c = d - (b+=3); // b=  , c=  , d=  , e=
    b = *wsk + e; // b=  , c=  , d=  , e=
    return 0;
}
