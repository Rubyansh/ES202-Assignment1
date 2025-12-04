// q70.c
// wap to count all occurrences of all characters in text

#include <stdio.h>
#include <string.h>

int main() {
    char text[1000];
    int count[256] = {0};
    
    printf("Enter text: ");
    scanf(" %[^\n]", text);
    
    for(int i = 0; i < strlen(text); i++) {
        count[(int)text[i]]++;
    }
    
    printf("Character occurrences:\n");
    for(int i = 0; i < 256; i++) {
        if(count[i] > 0 && i != ' ') {
            printf("'%c': %d\n", i, count[i]);
        }
    }
    
    return 0;
}