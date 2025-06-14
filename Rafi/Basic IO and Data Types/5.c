#include <stdio.h>
int main()
{

int a, b;
scanf("%d %d", &a, &b);

printf("Sum = %d\n", a+b);
printf("Subtraction = %d\n", a-b);
printf("Multiplication = %d\n", a*b);
printf("Division = %f\n", (a*1.0)/(b*1.0));
printf("Modulus = %d", a%b);


    return 0;
}