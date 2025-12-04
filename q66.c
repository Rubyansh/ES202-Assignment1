// q66.c
// wap to create student structure array and display

#include <stdio.h>

struct student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct student s[30];
    int n;
    
    printf("Enter number of students (max 30): ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll no: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    
    printf("\nStudent Details:\n");
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Marks: %.2f\n", s[i].marks);
    }
    
    return 0;
}