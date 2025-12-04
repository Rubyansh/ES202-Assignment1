// q58.c
// wap to swap two values using function

#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int n1, n2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    
    printf("Before swap: %d %d\n", n1, n2);
    swap(&n1, &n2);
    printf("After swap: %d %d\n", n1, n2);
    
    return 0;
}