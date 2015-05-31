#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
  /* Program to calculate the sum, min and max of an integer array */
  int i, sum, min, max, n=11  ;
  int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  sum = max = 0.0 ; min = 10.0 ;
  /* Initialize array */

  /* Find sum, min and max */
  for (i = 0 ; i < n ; i++ ) {
    sum += a[i] ;
    if (a[i] > max ) max = a[i];
    if (a[i] < min ) min = a[i];
  }

  printf("The max value is: %d\n", max);
  printf("The min value is: %d\n", min);
  printf("The sum value is: %d\n", sum);
  return 0;

}


/* define  string */
char str[7]={'H', 'E', 'L', 'L, 'O', '!', '\0'};
char str1="HELLO!";
