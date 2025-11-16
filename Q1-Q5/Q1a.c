//Add 2 numbers
#include <stdio.h>

int main() {
    int n1, n2, sum;

    printf("Enter First number: ");
    scanf("%d", &n1);

    printf("Enter Second number: ");
    scanf("%d", &n2);

    sum = n1 + n2;
    printf("The sum of both the numbers is %d\n", sum);

    return 0;
}