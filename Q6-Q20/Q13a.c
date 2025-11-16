// write a c program to find smallest of two numbers
#include <stdio.h>
int main() {
   int a, b;
   scanf("%d %d", &a, &b);
   if (a < b) printf("%d", a);
   else printf("%d", b);
   return 0;
}
