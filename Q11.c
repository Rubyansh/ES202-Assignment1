// write a c program to covert temperature from fahrenheit to celsius and celsius to fahrenheit (user must provide the choice of type of temperature)
#include <stdio.h>
int main() {
   int choice;
   float temp, converted;
   scanf("%d %f", &choice, &temp);
   if (choice == 1) {
       converted = (temp - 32) * 5 / 9;
       printf("%f celsius", converted);
   } else {
       converted = (temp * 9 / 5) + 32;
       printf("%f fahrenheit", converted);
   }
   return 0;
}
