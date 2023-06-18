#include <stdio.h>

int main()
{
  int x1, x2, x3, x4, x5, x6, x7, x8;

  printf("8ta son kiriting: ");
  scanf("%d %d %d %d %d %d %d %d", &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8);

  if (x1 > x2 && x1 > x3 && x1 > x4 && x1 > x5 && x1 > x6 && x1 > x7 && x1 > x8)
  {
    printf("Maxsimal son: %d", x1);
  }
  else if (x2 > x3 && x2 > x4 && x2 > x5 && x2 > x6 && x2 > x7 && x2 > x8)
  {
    printf("Maxsimal son: %d", x2);
  }
  else if (x3 > x4 && x3 > x5 && x3 > x6 && x3 > x7 && x3 > x8)
  {
    printf("Maxsimal son: %d", x3);
  }
  else if (x4 > x5 && x4 > x6 && x4 > x7 && x4 > x8)
  {
    printf("Maxsimal son: %d", x4);
  }
  else if (x5 > x6 && x5 > x7 && x5 > x5 > x8)
  {
    printf("Maxsimal son: %d", x5);
  }
  else if (x6 > x7 && x6 > x6 > x8)
  {
    printf("Maxsimal son: %d", x6);
  }
  else if (x7 > x8)
  {
    printf("Maxsimal son: %d", x7);
  }
  else
  {
    printf("Maxsimal son: %d", x8);
  }

  return 0;
}