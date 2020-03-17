#include <stdio.h>
#include <stdlib.h>


int powt()
{
    static int suma = 0;
    printf("Prosze podac liczbe: \n");
    int a = 0;
    scanf("%d", &a);
    suma = suma + a;
    printf("Suma zwroconych liczb: %d \n", suma);
    return a;
}

int main()
{

for(int i=0; i<5; i++){
    powt();
}

    return 0;
}
