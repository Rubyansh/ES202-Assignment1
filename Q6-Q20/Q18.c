// write a program in c to calculate and print the electricity bill of a given customer. the customer id and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer.
#include <stdio.h>


int main() {
   int id, units;
   float amount;


   printf("Enter Customer ID: ");
   scanf("%d", &id);
   printf("Enter Units Consumed: ");
   scanf("%d", &units);


   if (units <= 199)
       amount = units * 1.20;
   else if (units <= 500)
       amount = units * 1.80;
   else
       amount = units * 2.00;


   if (amount > 400)
       amount += amount * 0.15;


   if (amount < 100)
       amount = 100;


   printf("\nElectricity Bill\n");
   printf("--------------------\n");
   printf("Customer ID       : %d\n", id);
   printf("Units Consumed    : %d\n", units);
   printf("Total Amount Due  : Rs. %.2f\n", amount);


   return 0;
}
