#include <stdio.h>

const int MAX = 3;

int main () {

  int a_i[] = {10, 20, 30};
  double a_f[] = {0.5, 1.5, 2.5};
  int i;
  int *i_ptr;
  double *f_ptr;

  /* let us have array address in pointer */
  i_ptr = a_i;
  f_ptr = a_f;

  /* use the ++ operator to move to next location */
  for (i=0; i<MAX; i++,i_ptr++,f_ptr++ ) {
    printf("adr a_i[%d] = %8p\t", i, i_ptr );
    printf("adr a_f[%d] = %8p\n", i, f_ptr );
    printf("val a_i[%d] = %8d\t", i, *i_ptr );
    printf("val a_f[%d] = %8.2f\n", i, *f_ptr );
  }  
  return 0;
  
}
