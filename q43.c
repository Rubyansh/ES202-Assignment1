// wap to print the following pattern: 3, 2 2, 1 1 1
#include <stdio.h>

int main() {
    int rows = 3;
    
    for(int i = rows; i >= 1; i--) {
        for(int j = rows; j >= i; j--) {
            printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}