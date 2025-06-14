#include <stdio.h>

int main() {
    int i, count = 0, sum = 0;
    
    for(i = 1; count < 5; i += 2) {
        sum += i;
        count++;
    }
    
    printf("Sum of first 5 odd numbers: %d\n", sum);
    
    return 0;
}