#include <stdio.h>

/* function declaration */
int max(int i, int j);

int main() {

  /* local variable definition */
  int i = 100, j = 200, maxval;
  
  /* calling a function to get max value */
  maxval = max(a, b);

  printf( "Max value is : %d\n", maxval );
  return 0;

}


/* function returning the max between two numbers */
int max(int i, int j)
{
  /* local variable declaration */
  int result;

  if (i > j)
    result = i;
  else
    result = j;

  return result;
}
