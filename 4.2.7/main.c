#include <stdio.h>
#include <stdlib.h>

void a(int unsigned n ,int * tab1,int * tab2,int * tab3){
    for(int i=0;i<n;i++){
        tab3[i] = tab1[i]+tab2[i];
    }

    for(int i = 0; i < n; i++){
      printf("%d ", tab3[i]);
    }
    printf("\n");
}

void b(int unsigned n ,int * tab1,int * tab2,int * tab3){
    for(int i=0;i<n;i++){
        if(tab1[i]>tab2[i]){
            tab3[i] = tab1[i];
        }else{
            tab3[i] = tab2[i];
        }
    }

    for(int i = 0; i < n; i++){
      printf("%d ", tab3[i]);
    }
    printf("\n");
}

void c(int unsigned n ,int * tab1,int * tab2,int * tab3){
    int tab4[6];
    for(int i=0;i<n;i++){
        tab4[i] = tab3[i];
        tab3[i] = tab2[i];
        tab2[i] = tab1[i];
        tab1[i] = tab4[i];
    }

    for(int i = 0; i < n; i++){
      printf("%d ", tab2[i]);
    }
    printf("\n");
    for(int i = 0; i < n; i++){
      printf("%d ", tab3[i]);
    }
    printf("\n");
    for(int i = 0; i < n; i++){
      printf("%d ", tab1[i]);
    }
    printf("\n");
}




int main()
{
int tab1[6] = {1,2,3,4,5,6};
int tab2[6] = {5,8,3,6,8,4};
int tab3[6] = {8,3,5,7,4,6};
c(6,tab1,tab2,tab3);
b(6,tab1,tab2,tab3);
a(6,tab1,tab2,tab3);
return 0;
}
