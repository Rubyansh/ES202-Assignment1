// wap to find the sum of following series: s = 14 + 34 + 54 + 74 + ................... 100 terms

#include <stdio.h>

int main() {
    int n = 100;
    unsigned long long sum = 0;
    
    // Loop from i = 1 to 100
    for (int i = 1; i <= n; i++) {
        unsigned long long base = (2 * i) - 1;
        unsigned long long term = base * base * base * base;
        sum += term;
    }

    printf("The sum of the series for %d terms is: %llu\n", n, sum);

    return 0;
}