#include<stdio.h>
 
int main() {
  long number = 9999999998;
  long sum = 0;
  
  do {
    sum = 0 ;
    for (; number > 0; sum += number % 10, number /= 10);
    printf("Sum of the Digits : %ld\n", sum);
    if (sum >= 10 ) number = sum ;
  } while (sum >= 10) ;
  
}
