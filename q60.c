// q60.c
// wap to calculate factorial using recursion

#include <stdio.h>

long factorial(int n) {
    if(n <= 1) return 1;
    return n * factorial(n-1);
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Factorial of %d = %ld\n", n, factorial(n));
    
    return 0;
}