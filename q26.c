// wap to find the sum of following series: s = 2+4+6+8+......n terms.

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        sum += 2 * i;
    }
    
    printf("Sum of series = %d\n", sum);
    return 0;
}