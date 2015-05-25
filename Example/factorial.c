#include <stdio.h> 

int main() 
{ 
  int i,n;
  unsigned long factorial; 

  printf("Enter the number : "); 
  scanf("%d",&n); 
  
  factorial = 1; 
  for(i=1;i<=n;i++) 
    factorial *= i ; /*factorial * i; */

  printf("\nFactorial of %d is %ld\n",n,factorial );
  printf("%d\n",sizeof(factorial));
  return 0;
}
