#include<stdio.h>

int main () {
  int i=1,j=2;
  int a, b;
  int k=1,l=2;
  
  a=++k ;
  b=l++ ;

  printf("++i + j++: %d\n", ++i + j++ );
  printf("a=++i: %d, b=j++: %d, i:%d, j:%d\n", a, b, k, l);
  printf("a(=++i) + b(=j++): %d\n", a + b);

  return 0;

}
