// q74.c
// wap to copy contents of one file to another

#include <stdio.h>

int main() {
    FILE *s, *d;
    char ch;
    
    s = fopen("source.txt", "r");
    d = fopen("dest.txt", "w");
    
    if(s == NULL || d == NULL) {
        printf("File error\n");
        return 1;
    }
    
    while((ch = fgetc(s)) != EOF) {
        fputc(ch, d);
    }
    
    fclose(s);
    fclose(d);
    
    printf("File copied successfully\n");
    return 0;
}