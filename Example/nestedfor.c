#include <stdio.h>

int main () {
  int i, j, k, n=2;
  printf("i j k\n");
  /* Nested for loops */
  for (i=0; i<n; ++i)
    for (j=0; j<n; j++)
      for (k=0; k<n; ++k)
	printf("%d %d %d\n", i,j,k);
  return 0;
}
