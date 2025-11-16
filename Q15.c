// wap to calculate the root of a quadratic equation
#include <stdio.h>
#include <math.h>


int main() {
   float a, b, c, discriminant, root1, root2;


   printf("Enter coefficients a, b, and c (for ax^2 + bx + c = 0): ");
   scanf("%f %f %f", &a, &b, &c);


   discriminant = b*b - 4*a*c;


   if (discriminant > 0) {
       root1 = (-b + sqrt(discriminant)) / (2*a);
       root2 = (-b - sqrt(discriminant)) / (2*a);
       printf("The equation has two distinct real roots:\n");
       printf("Root 1 = %f\n", root1);
       printf("Root 2 = %f\n", root2);
   } else if (discriminant == 0) {
       root1 = -b / (2*a);
       printf("The equation has one real root (repeated):\n");
       printf("Root = %f\n", root1);
   } else {
       float realPart = -b / (2*a);
       float imagPart = sqrt(-discriminant) / (2*a);
       printf("The equation has complex roots:\n");
       printf("Root 1 = %f + %fi\n", realPart, imagPart);
       printf("Root 2 = %f - %fi\n", realPart, imagPart);
   }


   return 0;
}
