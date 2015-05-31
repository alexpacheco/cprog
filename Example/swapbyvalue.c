/* this is the main calling function */

int main() {

  int a = 2;
  int b = 3;
  
  printf("Before: a = %d and b = %d\n", a, b );
  swap( a, b );
  printf("After: a = %d and b = %d\n", a, b );

}

/* this is function, pass by value */
void swap(int p1, int p2) {

  int t;

  t = p2, p2 = p1, p1 = t;
  printf("Swap: a (p1) = %d and b(p2) = %d\n", p1, p2 );

}

/* this is function, pass by reference */
void swap_by_reference(int *p1, int *p2) {

  int t;
  
  t = *p2, *p2 = *p1, *p1 = t;
  printf("Swap: a (p1) = %d and b(p2) = %d\n", *p1, *p2);

}


/* call by-address function */
swap_by_reference( &a, &b );
