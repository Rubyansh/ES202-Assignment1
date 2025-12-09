//q35.c
#include <stdio.h>

int main() {
    int i, j;
    // 3x3 grid, columns are 1, 2, 3
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 3; j++) {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
