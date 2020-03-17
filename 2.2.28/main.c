#include <stdio.h>
#include <stdlib.h>



int f(unsigned int n,unsigned int m){
if(m==0){
    return n;
}
if(n>=m && m>0){
    return n - m + f(n-1,m) + f(n,m-1);
}
return f(m,n);
}


int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    printf("%d", f(n,m));
    return 0;
}
