//q37.c
#include <stdio.h>

int main() {
    int i, j;
    // 3x3 grid, columns descending 3, 2, 1
    for(i = 1; i <= 3; i++) {
        for(j = 3; j >= 1; j--) {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
