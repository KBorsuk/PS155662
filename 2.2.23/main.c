#include <stdio.h>
#include <stdlib.h>



int fibonacci(unsigned int n){
  if(n==0 || n ==1){
    return n;
  }
  int wynik = fibonacci(n-1)+ fibonacci(n-2);
  return wynik;
}


int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fibonacci(n));
    return 0;
}
