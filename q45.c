//q45.c
#include <stdio.h>

int main() {
    int i, j, s;
    // Pyramid Palindrome: 1, 121, 12321...
    for(i = 1; i <= 4; i++) {
        // Print leading tab spaces
        for(s = 1; s <= 4 - i; s++) {
            printf("\t");
        }
        // Print increasing numbers
        for(j = 1; j <= i; j++) {
            printf("%d\t", j);
        }
        // Print decreasing numbers
        for(j = i - 1; j >= 1; j--) {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
