// q72.c
// wap to check if string is palindrome ignoring case

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char s[]) {
    int i = 0, j = strlen(s)-1;
    
    while(i < j) {
        if(tolower(s[i]) != tolower(s[j]))
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    
    if(isPalindrome(str))
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    
    return 0;
}