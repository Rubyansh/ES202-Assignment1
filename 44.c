// wap to print the following pattern: rectangle of stars
#include <stdio.h>

int main() {
    int rows = 2, cols = 4;
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}