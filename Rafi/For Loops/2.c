#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float average;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("First %d natural numbers:\n", n);
    
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
        sum += i;
    }
    
    average = (float)sum / n;
    
    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", average);
    
    return 0;
}