/* printf example showing different specifier usage */
#include <stdio.h>
int main() {
  printf ("Characters: %c %c \n", 'a', 65);
  printf ("Decimals: %d %04d\n", 2014, 65);
  printf ("\t floats: %7.5f \t%f \t%e \n", 3.1416, 3.1416, 3.1416);
  printf ("%s \n", "hello world");
  return 0;
}
