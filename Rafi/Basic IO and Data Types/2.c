#include <stdio.h>
int main()
{
  int a;
  float b;
  char c;

  scanf("%d", &a);
  scanf("%f", &b);
  while (getchar() != '\n');
  scanf("%c", &c);

  printf("%d \n", a);
  printf("%f \n", b);
  printf("%c \n", c);

  return 0;
}
