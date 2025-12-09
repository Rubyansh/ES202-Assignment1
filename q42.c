//q42.c
#include <stdio.h>

int main() {
    int i, j;
    // Right triangle, starting at 3 and decreasing
    for(i = 1; i <= 3; i++) {
        for(j = 0; j < i; j++) {
            printf("%d\t", 3 - j);
        }
        printf("\n");
    }
    return 0;
}
