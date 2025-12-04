// q69.c
// wap to read name and output ASCII codes

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    
    printf("Enter your name: ");
    scanf(" %[^\n]", name);
    
    printf("ASCII codes: ");
    for(int i = 0; i < strlen(name); i++) {
        printf("%d ", name[i]);
    }
    printf("\n");
    
    return 0;
}