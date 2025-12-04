// wap to find product, sum, average, max and min from a list of n numbers
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int numbers[n];
    int sum = 0, product = 1, max, min;
    
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        
        if(i == 0) {
            max = min = numbers[i];
        } else {
            if(numbers[i] > max) max = numbers[i];
            if(numbers[i] < min) min = numbers[i];
        }
        
        sum += numbers[i];
        product *= numbers[i];
    }
    
    float average = (float)sum / n;
    
    printf("\nResults:\n");
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Average: %.2f\n", average);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    
    return 0;
}