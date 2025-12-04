// q62.c
// wap to check whether a number is prime, armstrong or perfect using functions

#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if(n <= 1) return 0;
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int isArmstrong(int n) {
    int sum = 0, temp = n, d, count = 0;
    
    while(temp > 0) {
        count++;
        temp /= 10;
    }
    
    temp = n;
    while(temp > 0) {
        d = temp % 10;
        sum += pow(d, count);
        temp /= 10;
    }
    
    return sum == n;
}

int isPerfect(int n) {
    int sum = 0;
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0) sum += i;
    }
    return sum == n;
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(isPrime(n)) printf("%d is prime\n", n);
    else printf("%d is not prime\n", n);
    
    if(isArmstrong(n)) printf("%d is armstrong\n", n);
    else printf("%d is not armstrong\n", n);
    
    if(isPerfect(n)) printf("%d is perfect\n", n);
    else printf("%d is not perfect\n", n);
    
    return 0;
}