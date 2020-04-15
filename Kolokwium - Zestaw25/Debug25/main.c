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
    int tab[] = {1,-1,3,2,9,8,2,3};
    int *wsk=tab-2;
    foo(wsk,6);
    int b = *(wsk+=4); //b=2
    int c = b+3; // b=2  , c=5
    int d = b^c; // b=2  , c=5  , d=7
    int e = (wsk+=-1)[2]; // b=2 , c=5  , d=7  , e=1
    e = (d *= 4) + (c /= 3); // b=2  , c=1  , d=28  , e=29
    c = d - (b+=3); // b=5  , c=23  , d=28  , e=29
    b = *wsk + e; // b=27  , c=23  , d=28  , e=29
    return 0;
}
