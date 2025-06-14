#include <stdio.h>

int main() {
    float cgpa;
    
    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);
    
    printf("Your grade is: ");
    
    if (cgpa >= 9) {
        printf("A\n");
    } 
    else if (cgpa >= 8) {
        printf("B\n");
    } 
    else if (cgpa >= 7) {
        printf("C\n");
    } 
    else if (cgpa >= 6) {
        printf("D\n");
    } 
    else {
        printf("F\n");
    }
    
    return 0;
}