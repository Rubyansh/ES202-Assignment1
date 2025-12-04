// q71.c
// wap to count all occurrences of a particular word in text

#include <stdio.h>
#include <string.h>

int main() {
    char text[1000], word[100];
    int count = 0;
    
    printf("Enter text: ");
    scanf(" %[^\n]", text);
    
    printf("Enter word to search: ");
    scanf("%s", word);
    
    char *ptr = text;
    while((ptr = strstr(ptr, word)) != NULL) {
        count++;
        ptr++;
    }
    
    printf("'%s' occurs %d times\n", word, count);
    
    return 0;
}