//q46.c
#include <stdio.h>

int main() {
    int i, j, s;
    // Pyramid Palindrome descending from 5: 5, 545, 54345...
    for(i = 5; i >= 1; i--) {
        // Print leading tab spaces (rows go 5->1, so spaces increase as i decreases? No, i is value)
        // Let's refactor: loop k from 0 to 4.
        int row = 5 - i + 1; // row 1, 2, 3, 4, 5
        
        for(s = 1; s <= 5 - row; s++) {
            printf("\t");
        }
        
        // Print decreasing part (5 down to i)
        for(j = 5; j >= i; j--) {
            printf("%d\t", j);
        }
        
        // Print increasing part (i+1 up to 5)
        for(j = i + 1; j <= 5; j++) {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
