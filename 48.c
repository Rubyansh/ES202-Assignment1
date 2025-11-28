// wap to print all prime numbers <= a given number
#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if(num <= 1) return 0;
    if(num == 2) return 1;
    if(num % 2 == 0) return 0;
    
    for(int i = 3; i <= sqrt(num); i += 2) {
        if(num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Prime numbers up to %d are:\n", n);
    for(int i = 2; i <= n; i++) {
        if(isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}