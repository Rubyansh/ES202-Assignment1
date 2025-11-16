//Calc avg value of items
#include <stdio.h>
 
int main() {
    float w1, w2, q1, q2;
    float tweight, tquantity, avg;
 
    printf("Enter weight and quantity of item 1: ");
    scanf("%f %f", &w1, &q1);
 
    printf("Enter weight and quantity of item 2: ");
    scanf("%f %f", &w2, &q2);
 
    tweight = (w1 * q1) + (w2 * q2);
    tquantity = q1 + q2;
 
    avg = tweight / tquantity;
    printf("Average value = %.5f\n", avg);
 
    return 0;
}