#include <stdio.h>

int main() {
    int i, count = 0;
    
    printf("First 5 odd numbers:\n");
    
    for(i = 1; count < 5; i += 2) {
        printf("%d ", i);
        count++;
    }
    printf("\n");
    
    return 0;
}