// q52.c
// wap to display the index of smallest and largest element in 3 X 4 matrix of integers

#include <stdio.h>

int main() {
    int m[3][4], i, j, min, max, min_row, min_col, max_row, max_col;
    
    printf("Enter 12 integers for 3x4 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    
    min = max = m[0][0];
    min_row = min_col = max_row = max_col = 0;
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            if(m[i][j] < min) {
                min = m[i][j];
                min_row = i;
                min_col = j;
            }
            if(m[i][j] > max) {
                max = m[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }
    
    printf("Smallest element %d at [%d][%d]\n", min, min_row, min_col);
    printf("Largest element %d at [%d][%d]\n", max, max_row, max_col);
    
    return 0;
}