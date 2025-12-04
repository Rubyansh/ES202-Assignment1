// q61.c
// wap to check whether a number is even or odd using functions

#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(isEven(n))
        printf("%d is even\n", n);
    else
        printf("%d is odd\n", n);
    
    return 0;
}