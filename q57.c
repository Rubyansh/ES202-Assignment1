// q57.c
// wap to implement simple calculator using functions

#include <stdio.h>

float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float divi(float a, float b) { return b != 0 ? a / b : 0; }

int main() {
    float n1, n2;
    char op;
    
    printf("Enter two numbers and operator (+, -, *, /): ");
    scanf("%f %f %c", &n1, &n2, &op);
    
    switch(op) {
        case '+': printf("Result: %.2f\n", add(n1, n2)); break;
        case '-': printf("Result: %.2f\n", sub(n1, n2)); break;
        case '*': printf("Result: %.2f\n", mul(n1, n2)); break;
        case '/': printf("Result: %.2f\n", divi(n1, n2)); break;
        default: printf("Invalid operator\n");
    }
    
    return 0;
}