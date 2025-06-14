#include <stdio.h>

int main() {
    int i, count = 0;
    
    printf("First 5 even numbers:\n");
    
    for(i = 2; count < 5; i += 2) {
        printf("%d ", i);
        count++;
    }
    printf("\n");
    
    return 0;
}