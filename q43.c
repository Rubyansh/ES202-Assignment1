//q43.c
#include <stdio.h>

int main() {
    int i, j;
    // Right triangle, rows are 3, then 2 2, then 1 1 1
    for(i = 3; i >= 1; i--) {
        for(j = 1; j <= (4 - i); j++) {
            printf("%d\t", i);
        }
        printf("\n");
    }
    return 0;
}
