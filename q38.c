// wap to print the following pattern: descending columns 3 3 3 2 2 2 1 1 1

#include <stdio.h>

int main() {
    int i, j;
    
    for(i = 3; i >= 1; i--) {
        for(j = 1; j <= 3; j++) {
            printf("%d\n", i);
        }
    }
    return 0;
}