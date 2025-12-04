// q53.c
// wap that accepts N*N matrix as input and print transpose of this matrix

#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter N for NxN matrix: ");
    scanf("%d", &n);
    
    int m[n][n], t[n][n];
    
    printf("Enter %dx%d matrix:\n", n, n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            t[j][i] = m[i][j];
        }
    }
    
    printf("Transpose matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}