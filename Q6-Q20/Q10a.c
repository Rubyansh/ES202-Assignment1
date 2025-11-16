// write a c program to check whether a triangle is equilateral, scalene, or isosceles
#include <stdio.h>
int main() {
   float a, b, c;
   scanf("%f %f %f", &a, &b, &c);
   if (a == b && b == c) printf("equilateral");
   else if (a == b || b == c || a == c) printf("isosceles");
   else printf("scalene");
   return 0;
}
