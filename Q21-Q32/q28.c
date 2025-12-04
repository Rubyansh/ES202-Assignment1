// wap to find the sum of following series: 1 - 1/2 + 1/3 - 1/4 + 1/5 - ...... up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0)
            sum -= 1.0 / i;
        else
            sum += 1.0 / i;
    }
    
    printf("Sum of series = %.4f\n", sum);
    return 0;
}