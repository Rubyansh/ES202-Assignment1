// q59.c
// wap to calculate factorial using function

#include <stdio.h>

long factorial(int n) {
    long f = 1;
    for(int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Factorial of %d = %ld\n", n, factorial(n));
    
    return 0;
}