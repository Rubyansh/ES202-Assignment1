// wap to print the following pattern: descending groups 3 2 1 repeated three times

#include <stdio.h>

int main() {
    int i, j;
    
    for(i = 1; i <= 3; i++) {
        for(j = 3; j >= 1; j--) {
            printf("%d\n", j);
        }
    }
    return 0;
}