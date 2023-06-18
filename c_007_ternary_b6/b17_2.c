#include <stdio.h>

int main()
{
  int x1, x2, x3, x4, x5, x6, x7;

  printf("7ta son kiriting: ");
  scanf("%d %d %d %d %d %d %d", &x1, &x2, &x3, &x4, &x5, &x6, &x7);

  if (x1 > x2 && x1 > x3 && x1 > x4 && x1 > x5 && x1 > x6 && x1 > x7)
  {
    printf("Maxsimal son: %d", x1);
  }
  else if (x2 > x3 && x2 > x4 && x2 > x5 && x2 > x6 && x2 > x7)
  {
    printf("Maxsimal son: %d", x2);
  }
  else if (x3 > x4 && x3 > x5 && x3 > x6 && x3 > x7)
  {
    printf("Maxsimal son: %d", x3);
  }
  else if (x4 > x5 && x4 > x6 && x4 > x7)
  {
    printf("Maxsimal son: %d", x4);
  }
  else if (x5 > x6 && x5 > x7)
  {
    printf("Maxsimal son: %d", x5);
  }
  else if (x6 > x7)
  {
    printf("Maxsimal son: %d", x6);
  }
  else
  {
    printf("Maxsimal son: %d", x7);
  }

  return 0;
}