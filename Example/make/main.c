#include <stdio.h>
#include "functions.h"

int main(){

  int n;
  
  printf("Enter an integer < 15:");
  scanf("%d",&n);

  
  print_hello();
  printf("Factorial of %d is %d", n, factorial(n));

  return 0;
}
