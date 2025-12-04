// wap to find the sum of following series: s = 1/1! + 2/2! + 3/3! + ............. 7 terms.

#include <stdio.h>

int main() {
    int i, j;
    float sum = 0, fact;
    
    printf("Sum of series: ");
    for(i = 1; i <= 7; i++) {
        fact = 1;
        for(j = 1; j <= i; j++) {
            fact *= j;
        }
        sum += i / fact;
        printf("%d/%d! ", i, i);
        if(i < 7) printf("+ ");
    }
    
    printf("= %.4f\n", sum);
    return 0;
}