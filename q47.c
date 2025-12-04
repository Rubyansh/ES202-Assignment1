// wap to print a binary pattern
#include <stdio.h>

int main() {
    int rows = 5, cols = 4;
    int pattern[5][4] = {
        {1, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 0, 1},
        {0, 1, 0, 1},
        {1, 0, 1, 0}
    };
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", pattern[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}