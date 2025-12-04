// q77.c
// wap to compare two given strings

#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    
    printf("Enter first string: ");
    scanf(" %[^\n]", s1);
    
    printf("Enter second string: ");
    scanf(" %[^\n]", s2);
    
    int result = strcmp(s1, s2);
    
    if(result == 0)
        printf("Strings are equal\n");
    else if(result < 0)
        printf("First string is less than second\n");
    else
        printf("First string is greater than second\n");
    
    return 0;
}