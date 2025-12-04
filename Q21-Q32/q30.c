// wap to find the sum of following series: s = -1^3 + 3^3 - 5^3 + 7^3 - 9^3 + 11^3 - ......n terms.

#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    long term, sum = 0;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        term = pow(2*i + 1, 3);
        if(i % 2 == 0)
            sum -= term;
        else
            sum += term;
    }
    
    printf("Sum of series = %ld\n", sum);
    return 0;
}