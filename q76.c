// q76.c
// wap to store ten integers, separate odd and even to different files

#include <stdio.h>

int main() {
    FILE *fall, *fodd, *feven;
    int n[10], i;
    
    printf("Enter 10 integers: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &n[i]);
    }
    
    fall = fopen("all.txt", "w");
    fodd = fopen("odd.txt", "w");
    feven = fopen("even.txt", "w");
    
    for(i = 0; i < 10; i++) {
        fprintf(fall, "%d ", n[i]);
        if(n[i] % 2 == 0)
            fprintf(feven, "%d ", n[i]);
        else
            fprintf(fodd, "%d ", n[i]);
    }
    
    fclose(fall);
    fclose(fodd);
    fclose(feven);
    
    printf("Files created successfully\n");
    return 0;
}