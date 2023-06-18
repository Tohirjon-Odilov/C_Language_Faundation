#include <stdio.h>

int main()
{

  int x1, x2, x3, x4, max;

  printf("4 ta son kiriting: ");
  scanf("%d%d%d%d", &x1, &x2, &x3, &x4);

  max = x1;

  if (max < x2) max = x2;
  if (max < x3) max = x3;
  if (max < x4) max = x4;

  printf("Max number = %d\n", max);

  return 0;
}
