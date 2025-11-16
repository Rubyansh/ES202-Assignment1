// write a c program to check whether a character is an alphabet, digit
#include <stdio.h>
int main() {
   char ch;
   scanf("%c", &ch);
   if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) printf("alphabet");
   else if (ch >= '0' && ch <= '9') printf("digit");
   else printf("other");
   return 0;
}
