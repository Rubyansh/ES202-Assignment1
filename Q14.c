// Write a program in C to implement Simple Calculator. 
#include <stdio.h>

int main() {
   char op;
   float n1, n2, result;
   int choice;


   do {
       printf("\nSimple Calculator\n");
       printf("1. Addition (+)\n");
       printf("2. Subtraction (-)\n");
       printf("3. Multiplication (*)\n");
       printf("4. Division (/)\n");
       printf("5. Exit\n");
       printf("Enter your choice: ");
       scanf("%d", &choice);


       if (choice >= 1 && choice <= 4) {
           printf("Enter two numbers: ");
           scanf("%f %f", &n1, &n2);
       }


       switch (choice) {
           case 1:
               result = n1 + n2;
               printf("Result: %f + %f = %f\n", n1, n2, result);
               break;
           case 2:
               result = n1 - n2;
               printf("Result: %f - %f = %f\n", n1, n2, result);
               break;
           case 3:
               result = n1 * n2;
               printf("Result: %f * %f = %f\n", n1, n2, result);
               break;
           case 4:
               if (n2 == 0)
                   printf("Error! Division by zero.\n");
               else {
                   result = n1 / n2;
                   printf("Result: %f / %f = %f\n", n1, n2, result);
               }
               break;
           case 5:
               printf("Exiting...\n");
               break;
           default:
               printf("Invalid choice.\n");
       }
   } while (choice != 5);


   return 0;
}
