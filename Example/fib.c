#include<stdio.h>

unsigned int fib(unsigned int n)
{
  /*
    return n<2?n:fib(n-1)+fib(n-2);
  */
  if ( n < 2 ) {
    return n;
  } else {
    return fib(n-1)+fib(n-2);
  }
}

int main()
{
  unsigned int n;
  for(n=0; n<10; ++n) 
    printf("fib(%d)=%d\n", n, fib(n));

  return 0;
}
