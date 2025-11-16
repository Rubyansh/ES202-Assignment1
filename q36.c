// wap to print the following pattern: grouped numbers 1 1 1 2 2 2 3 3 3

#include <stdio.h>

int main() {
    int i, j;
    
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 3; j++) {
            printf("%d\n", i);
        }
    }
    return 0;
}