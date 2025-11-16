//Print F in hashes, 6 long, line 1 5, line 2 4
#include <stdio.h>
 
int main() {
    int i, j;
 
    //Line1
    for(i = 1; i <= 5; i++) {
        printf("#");
    }
    printf("\n");
 
    for(i = 1; i <= 2; i++) {
        printf("#\n");
    }
 
    //Line2
    for(i = 1; i <= 4; i++) {
        printf("#");
    }
    printf("\n");
 
    for(i = 1; i <= 2; i++) {
        printf("#\n");
    }
 
    return 0;
}