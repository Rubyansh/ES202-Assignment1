// wap to to accept a coordinate point in a xy coordinate system and determine in which quadrant the coordinate point lies.
#include <stdio.h>
int main() {
   printf("Enter points x and y: \n");
   float x, y;
   scanf("%f %f", &x, &y);
   if (x > 0 && y > 0) printf("first quadrant");
   else if (x < 0 && y > 0) printf("second quadrant");
   else if (x < 0 && y < 0) printf("third quadrant");
   else if (x > 0 && y < 0) printf("fourth quadrant");
   else if (x == 0 && y != 0) printf("y-axis");
   else if (y == 0 && x != 0) printf("x-axis");
   else printf("origin");
   return 0;
}
