#include <stdio.h>
int main()
{

    float fern;
    scanf("%f", &fern);

    float celc = (((fern - 32) * 5) / 9);
    printf("%f", celc);

    return 0;
}