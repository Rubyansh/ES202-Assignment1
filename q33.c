// wap to find the sum of following series: s = 14 + 34 + 54 + 74 + ................... 100 terms

#include <stdio.h>

int main() {
    int i;
    long sum = 0;
    
    for(i = 0; i < 100; i++) {
        sum += 14 + i * 20;
    }
    
    printf("Sum of series = %ld\n", sum);
    return 0;
}