// q73.c
// wap to use macros for simple interest calculation

#include <stdio.h>

#define SI(p, r, t) ((p) * (r) * (t) / 100)
#define AMOUNT(p, si) ((p) + (si))

int main() {
    float p, r, t, si, amt;
    
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);
    
    si = SI(p, r, t);
    amt = AMOUNT(p, si);
    
    printf("Simple Interest: %.2f\n", si);
    printf("Amount: %.2f\n", amt);
    
    return 0;
}