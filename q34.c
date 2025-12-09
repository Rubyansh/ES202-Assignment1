//q34.c
#include <stdio.h>

int main() {
    int i, j;
    // 3x3 grid of asterisks
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 3; j++) {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
