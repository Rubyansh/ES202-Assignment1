// q64.c
// wap to print all strong numbers between given interval using functions

#include <stdio.h>

int factorial(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++) f *= i;
    return f;
}

int isStrong(int n) {
    int sum = 0, temp = n;
    
    while(temp > 0) {
        int d = temp % 10;
        sum += factorial(d);
        temp /= 10;
    }
    
    return sum == n;
}

int main() {
    int start, end;
    
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);
    
    printf("Strong numbers between %d and %d: ", start, end);
    for(int i = start; i <= end; i++) {
        if(isStrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}