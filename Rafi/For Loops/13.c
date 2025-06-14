#include <stdio.h>

int main() {
    int i;
    
    printf("Counting from 1 to 10 (will stop at 5):\n");
    
    for(i = 1; i <= 10; i++) {
        printf("%d ", i);
        
        if(i == 5) {
            printf("\nReached 5! Breaking the loop.");
            break;
        }
    }
    
    printf("\nLoop has ended\n");
    
    return 0;
}