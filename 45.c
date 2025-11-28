// wap to print a number pyramid pattern
#include <stdio.h>

int main() {
    int n = 3;
    
    for(int i = 1; i <= n; i++) {
        // Print spaces
        for(int j = i; j < n; j++) {
            printf("  ");
        }
        // Print increasing numbers
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // Print decreasing numbers
        for(int j = i-1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}