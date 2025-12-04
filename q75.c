// q75.c
// wap to store ten integers to one file and squares to another

#include <stdio.h>

int main() {
    FILE *f1, *f2;
    int n[10], i;
    
    printf("Enter 10 integers: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &n[i]);
    }
    
    f1 = fopen("numbers.txt", "w");
    f2 = fopen("squares.txt", "w");
    
    for(i = 0; i < 10; i++) {
        fprintf(f1, "%d ", n[i]);
        fprintf(f2, "%d ", n[i] * n[i]);
    }
    
    fclose(f1);
    fclose(f2);
    
    printf("Files created successfully\n");
    return 0;
}