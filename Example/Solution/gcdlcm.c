#include <stdio.h>

int main()
{

  int a, b, gcd, lcm, u, v, t ;

  printf("Program to calculate GCD and LCM of two integers\n");
  printf("Enter two integers\n");
  scanf("%d %d", &a, &b );

  u = a ;
  v = b ;

  while ( v ) {
    t = v ;
    v = u % v ;
    u = t ;
  }

  if ( u < 0 ) {
    gcd = -u ;
  } else {
    gcd = u ;
  }
  gcd = u ;
  lcm = a * b / gcd ;

  printf("GCD of %d and %d is %d\n", a,b,gcd);
  printf("LCM of %d and %d is %d\n", a,b,lcm);
  
}
