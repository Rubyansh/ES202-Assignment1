//q41.c
#include <stdio.h>

int main() {
    int i, j;
    // Right triangle of numbers (row value)
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d\t", i);
        }
        printf("\n");
    }
    return 0;
}
