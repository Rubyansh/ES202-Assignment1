// write a c program to check whether a triangle is right angles, obtuse, acute triangle
#include <stdio.h>
int main() {
   float a, b, c;
   scanf("%f %f %f", &a, &b, &c);
   if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) printf("right");
   else if (a*a + b*b < c*c || a*a + c*c < b*b || b*b + c*c < a*a) printf("obtuse");
   else printf("acute");
   return 0;
}
