#include <stdio.h> 
#include "functions.h"

int factorial(int n) 
{ 
  int i, result;
  
  result = 1; 
  for(i=1; i <= n; i++) 
    result *= i ; 

  return result;
}
