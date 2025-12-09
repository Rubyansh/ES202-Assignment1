//q47.c
#include <stdio.h>

int main() {
    int i, j;
    // Binary Triangle 1, 01, 101...
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            // If sum of row and col index is even, print 1, else 0
            if((i + j) % 2 == 0) {
                printf("1\t");
            } else {
                printf("0\t");
            }
        }
        printf("\n");
    }
    return 0;
}
