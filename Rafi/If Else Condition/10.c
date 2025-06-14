#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is in UPPERCASE.\n", ch);
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is in lowercase.\n", ch);
    } 
    else {
        printf("%c is not an alphabet.\n", ch);
    }
    
    return 0;
}