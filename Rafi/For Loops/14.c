#include <stdio.h>

int main() {
    int i;
    
    printf("Printing numbers from 1 to 10 (skipping even numbers):\n");
    
    for(i = 1; i <= 10; i++) {
        if(i % 2 == 0) {
            continue;
        }
        
        printf("%d ", i);
    }
    
    printf("\nLoop has completed\n");
    
    return 0;
}