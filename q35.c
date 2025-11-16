// wap to print the following pattern: repeating 1 2 3 in three groups

#include <stdio.h>

int main() {
    int i, j;
    
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 3; j++) {
            printf("%d\n", j);
        }
    }
    return 0;
}