// q68.c
// wap to compare two dates

#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int compare(struct date d1, struct date d2) {
    if(d1.day == d2.day && d1.month == d2.month && d1.year == d2.year)
        return 1;
    return 0;
}

int main() {
    struct date d1, d2;
    
    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);
    
    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);
    
    if(compare(d1, d2))
        printf("Equal\n");
    else
        printf("Unequal\n");
    
    return 0;
}