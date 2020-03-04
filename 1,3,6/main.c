#include <stdio.h>
#include <stdlib.h>

int main()
{
    float xa,ya,a,xb,yb,b,x,y;
    scanf("%f %f %f",&xa, &ya, &a);
    scanf("%f %f %f",&xb, &yb, &b);

    float w = xa+yb-xb-ya;
    float wy = xa+b-xb-a;
    float wx = a+yb-b-ya;

    if(w==0){
        printf("Brak rozwiazania");
    }else if(wx==0 && wy ==0){
        printf("Nieskonczenie wiele rozwiazan");
    }
    else{
    x = w/wx;
    y = w/wy;
    printf("%f %f", x, y);
    }


    return 0;
}
