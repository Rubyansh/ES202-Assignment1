// q51.c
// wap to display the index of smallest and largest element in 10 integers

#include <stdio.h>

int main() {
    int a[10], i, min, max, min_idx, max_idx;
    
    printf("Enter 10 integers: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    
    min = max = a[0];
    min_idx = max_idx = 0;
    
    for(i = 1; i < 10; i++) {
        if(a[i] < min) {
            min = a[i];
            min_idx = i;
        }
        if(a[i] > max) {
            max = a[i];
            max_idx = i;
        }
    }
    
    printf("Smallest element %d at index %d\n", min, min_idx);
    printf("Largest element %d at index %d\n", max, max_idx);
    
    return 0;
}