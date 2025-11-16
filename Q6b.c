// write a c program to convert specified days into years, weeks, and days.
#include <stdio.h>
int main() {
   int total_days, years, weeks, days;
   scanf("%d", &total_days);
   years = total_days / 365;
   weeks = (total_days % 365) / 7;
   days = total_days % 7;
   printf("%d years, %d weeks, %d days", years, weeks, days);
   return 0;
}
