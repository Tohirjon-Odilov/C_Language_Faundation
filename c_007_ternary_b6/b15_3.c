#include <stdio.h>

int main()
{
  int x1, x2, x3, x4, x5, max;

  printf("5ta son kiriting: ");
  scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);

  max = x1;
  if (x2 > max) max = x2;
  if (x3 > max) max = x3;
  if (x4 > max) max = x4;
  if (x5 > max) max = x5;

  printf("Maxsimal son: %d", max);

  return 0;
}