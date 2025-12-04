// q67.c
// wap to create simple database for 100 persons

#include <stdio.h>

struct person {
    char name[50];
    char dob[20];
    char address[100];
    char phone[15];
};

int main() {
    struct person p[100];
    int n;
    
    printf("Enter number of persons (max 100): ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("\nPerson %d:\n", i+1);
        printf("Enter name: ");
        scanf(" %[^\n]", p[i].name);
        printf("Enter DOB (dd/mm/yyyy): ");
        scanf("%s", p[i].dob);
        printf("Enter address: ");
        scanf(" %[^\n]", p[i].address);
        printf("Enter phone: ");
        scanf("%s", p[i].phone);
    }
    
    printf("\nPerson Database:\n");
    for(int i = 0; i < n; i++) {
        printf("\nPerson %d:\n", i+1);
        printf("Name: %s\n", p[i].name);
        printf("DOB: %s\n", p[i].dob);
        printf("Address: %s\n", p[i].address);
        printf("Phone: %s\n", p[i].phone);
    }
    
    return 0;
}