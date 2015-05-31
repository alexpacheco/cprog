/* pointer_rules.c */

#include <stdio.h>

int main() {
  
  int a = 6, b = 10;
  int *p;
  
  printf("\nInitial values:\n\tthe value of a is %d, value of b is %d\n", a, b);
  printf("the address of a is : %p, address of b is : %p\n", &a, &b);  
  p = &a; /* point p to a */
  printf("\nafter \"p = &a\":\n");
  printf("\tthe value of p is %p, value at that address is %d\n", p, *p);
  p = &b; /* point p to b */
  printf("\nafter \"p = &b\":\n");
  printf("\tthe value of p is %p, value at that address is %d\n", p, *p);
  /* dereference pointer p */
  *p = 6, p = &a, *p = 10 ;
  printf("\nafter dereferencing the pointer:\n");		
  printf("\tthe value of a is %d, value of b is %d\n", a, b);
  return 0;
}
