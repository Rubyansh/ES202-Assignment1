// write a program to find gross salary of employee if da is 40% of basic salary and hra is 20% of basic salary. basic salary will be entered as input by keyboard.
#include <stdio.h>
int main() {
   float basic, gross;
   printf("Enter basic salary: ");
   scanf("%f", &basic);
   gross = basic + 0.4*basic + 0.2*basic;
   printf("%f", gross);
   return 0;
}
