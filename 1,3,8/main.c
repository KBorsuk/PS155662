#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    int wybor;
    printf("1:kwadrat \n 2:prostokat \n 3:trojkat \n");
    scanf("%d",&wybor);

    switch(wybor) {
      case 1 :
     printf("Podaj bok");
     scanf("%f", &a);
     printf("%f", a*a);
     break;
      case 2 :
     printf("Podaj boki");
     scanf("%f %f", &a, &b);
     printf("%f", a*b);
     break;
      case 3 :
     printf("Podaj boki i wysokosc");
     scanf("%f %f %f", &a, &b, &c);
     printf("%f", a*b/c);
     break;
      default :
         printf("Niepoprawny wybor" );
   }

    return 0;
}
