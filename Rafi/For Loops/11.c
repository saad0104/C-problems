#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("First %d square natural numbers:\n", n);
    
    for(i = 1; i <= n; i++) {
        int square = i * i;
        printf("%d \n", square);
        sum += square;
    }
    
    printf("Sum of first %d square natural numbers: %d\n", n, sum);
    
    return 0;
}