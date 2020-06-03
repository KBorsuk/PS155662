#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo(char* napis){
    int x = strlen(napis);
    for(int i=x;i!=0;i--){
        if(i%2!=0){
            int koniec;
            for(int a=i; napis[a]!=0; a++)
            {
            napis[a] = napis[a + 1];

            }

        }
    }
}



int main()
{
    char x[] = "abc123";
    foo(x);
    printf("%s",x);
    return 0;
}
