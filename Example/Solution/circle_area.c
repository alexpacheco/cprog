#include <stdio.h>
#include <math.h>

#define PI 3.1415
int main ()
{
  double radius, area, circum ;
  double pic ;

  printf("Enter radius of circle\n");
  scanf("%lf", &radius);

  area = PI * radius * radius ;
  circum = 2.0 * PI * radius ;

  printf("Area of Circle with radius %12.6f is %12.6f\n", radius, area);
  printf("Circumference of Circle with radius %12.6f is %12.6f\n", radius, circum);


  pic = 4. * atan(1.0) ;
 
  area = pic * radius * radius ;
  circum = 2.0 * pic * radius ;

  printf("Area of Circle with radius %12.6f is %12.6f\n", radius, area);
  printf("Circumference of Circle with radius %12.6f is %12.6f\n", radius, circum);
  
}
