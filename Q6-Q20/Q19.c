// a library charges a fine for every book returned late. for first 5 days the fine is 50 paisa, for 6-10 days, fine is one rupee and above 10 days, fine is 5 rupees. if you return the book after 30 days your membership will be cancelled. write a program to accept the number of days the member is late to return the book and display the fine or appropriate message.
#include <stdio.h>


int main() {
   int days;


   printf("Enter the number of days late: ");
   scanf("%d", &days);


   if (days <= 0)
       printf("Invalid input. Days cannot be zero or negative.\n");
   else if (days <= 5)
       printf("Fine: 0.50 rupees\n");
   else if (days <= 10)
       printf("Fine: 1.00 rupee\n");
   else if (days <= 30)
       printf("Fine: 5.00 rupees\n");
   else
       printf("Membership cancelled\n");


   return 0;
}
