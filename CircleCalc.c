
#include <stdio.h>
#define PI 3.14
/*
%d for int
%f for float
%c for character 
%if for double 
%id fro double 
%ld for long int
%u for unisigned int 
*/

int main()
{
 //const float pi = PI;
   float radius;
   float area, perimeter;

   printf("Enter the radius of the circle: ");
   scanf("%f", &radius);

   area = PI * radius * radius;
   perimeter = 2 * PI * radius;

   printf("Area of a circle with radius %.2f is %.2f\n", radius, area);
   
   printf("The perimeter is %.2f\n", perimeter);


    return 0;

}
