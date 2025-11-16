//Swap 2 numbers w/ 3rd var
#include <stdio.h>
 
int main() {
    int a, b, tmp;
 
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
 
    printf("Before swapping: a = %d, b = %d\n", a, b);
 
    tmp = a;
    a = b;
    b = tmp;
 
    printf("After swapping: a = %d, b = %d\n", a, b);
 
    return 0;
}