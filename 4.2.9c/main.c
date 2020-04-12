#include <stdio.h>
#include <stdlib.h>

void c(int unsigned n ,int * tab1,int * tab2,int * tab3){
    for(int i=0;i<n;i++){
        if(tab1[i]>tab2[i]){
            tab1[i] = tab2[i];
        }
        if (tab1[i]>tab3[i]){
            tab1[i] = tab3[i];
        }
    }

    for(int i = 0; i < n; i++){
      printf("%d ", tab1[i]);
    }
    printf("\n");
}

int main()
{
int tab1[6] = {1,2,3,1,2,3};
int tab2[6] = {2,3,1,2,3,1};
int tab3[6] = {3,1,2,3,1,2};
c(6,tab1,tab2,tab3);
return 0;
}
