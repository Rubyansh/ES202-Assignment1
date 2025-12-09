//q44.c
#include <stdio.h>

int main() {
    int i, j, s;
    // Pyramid of asterisks
    for(i = 1; i <= 4; i++) {
        // Print leading tab spaces
        for(s = 1; s <= 4 - i; s++) {
            printf("\t");
        }
        // Print asterisks
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
