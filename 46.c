// wap to print a complex number pattern
#include <stdio.h>

int main() {
    int n = 4;
    
    for(int i = n; i >= 1; i--) {
        // Print spaces
        for(int j = n; j > i; j--) {
            printf("  ");
        }
        // Print numbers
        for(int j = n; j >= i; j--) {
            printf("%d ", j);
        }
        for(int j = i+1; j <= n; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}