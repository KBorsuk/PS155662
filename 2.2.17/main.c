#include <stdio.h>
#include <stdlib.h>


void wywolania(){
    static int il_wywolan = 0;
    il_wywolan++;
    printf("%d",il_wywolan);
}

int main()
{

    int n;
    scanf("%d", &n);

    for(int i=0 ; i<n ; i++){
        wywolania();
    }


    return 0;
}
