//Swap 2 numbers w/o 3rd var

#include <stdio.h>
 
int main() {
    int a, b;
 
    printf("Enter 2 numbers to swap: ");
    scanf("%d %d", &a, &b);
 
    printf("Before swapping: a = %d, b = %d\n", a, b);
 
    //gonna use bitwise xor
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
 
    printf("After swapping: a = %d, b = %d\n", a, b);
 
    return 0;
}