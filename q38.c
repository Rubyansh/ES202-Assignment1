//q38.c
#include <stdio.h>

int main() {
    int i, j;
    // 3x3 grid, rows descending 3, 2, 1
    for(i = 3; i >= 1; i--) {
        for(j = 1; j <= 3; j++) {
            printf("%d\t", i);
        }
        printf("\n");
    }
    return 0;
}
