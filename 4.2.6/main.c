#include <stdio.h>
#include <stdlib.h>

void a(int unsigned n ,int * tab1,int * tab2){
    for(int i=0;i<n;i++){
        tab2[i] = tab1[i];
    }
    for(int i = 0; i < n; i++){
      printf("%d ", tab2[i]);
    }
    printf("\n");
}

void b(int unsigned n ,int * tab1,int * tab2){
    for(int i=0;i<n;i++){
        tab2[i] = tab1[n-i-1];
    }
    for(int i = 0; i < n; i++){
      printf("%d ", tab2[i]);
    }

}

int main()
{
int tab1[6] = {1,2,3,4,5,6};
int tab2[6] = {5,8,3,6,8,4};
a(6,tab1,tab2);
b(6,tab1,tab2);
return 0;
}
