/* dynamic_1d_array.c */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int n;
  int* i_array; /* define the integer pointer */
  int j;

  /* find out how many integers are required */
  printf("Input the number of elements in the array:\n");
  scanf("%d",&n);

  /* allocate memory space for the array */
  i_array = (int*)malloc(n*sizeof(int));
  
  /* output the array */
  for (j=0;j<n;j++) {
    i_array[j]=j; /* use the pointer to walk along the array */
    printf("%d ",i_array[j]);
  }

  printf("\n");
  free((void*)i_array); /* free memory after use*/
  return 0;
}
