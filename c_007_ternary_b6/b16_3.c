#include <stdio.h>

int main()
{

  int x1, x2, x3, x4, x5, x6, max;

  printf("6 ta son kiriting: ");
  scanf("%d%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5, &x6);

  max = x1;

  if (max < x2) max = x2;
  if (max < x3) max = x3;
  if (max < x4) max = x4;
  if (max < x5) max = x5;
  if (max < x6) max = x6;

  printf("Max number = %d\n", max);

  return 0;
}
