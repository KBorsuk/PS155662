#include <stdio.h>
#include <stdlib.h>

void b(int unsigned n ,int * tab1,int * tab2,int * tab3){
    for(int i=0;i<n;i++){
        if(tab2[i]<tab3[i] && tab2[i]<tab1[i]){
            if(tab3[i]<tab1[i]){
                tab2[i] = tab3[i];
            }else{
                tab2[i] = tab1[i];
            }
        }else if (tab2[i]>tab3[i] && tab2[i]>tab1[i]){
            if(tab3[i]>tab1[i]){
                tab2[i] = tab3[i];
            }else{
                tab2[i] = tab1[i];
            }
        }
    }

    for(int i = 0; i < n; i++){
      printf("%d ", tab2[i]);
    }
    printf("\n");
}

int main()
{
int tab1[6] = {1,2,3,1,2,3};
int tab2[6] = {2,3,1,2,3,1};
int tab3[6] = {3,1,2,3,1,2};
b(6,tab1,tab2,tab3);
return 0;
}
