// wap to find the sum of following series: 11 + 21 + 31 + 41 + ..... + n!

#include <stdio.h>

int main() {
    int n, i, j;
    long fact, sum = 0;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        fact = 1;
        for(j = 1; j <= i; j++) {
            fact *= j;
        }
        sum += fact;
    }
    
    printf("Sum of series = %ld\n", sum);
    return 0;
}