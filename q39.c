//q39.c
#include <stdio.h>

int main() {
    int i, j;
    // Right triangle of asterisks
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= i; j++) {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
