#include <stdio.h>

int main()
{
  int x1, x2, x3, x4;

  printf("4ta son kiriting: ");
  scanf("%d %d %d %d", &x1, &x2, &x3, &x4);

  if (x1 > x2)
  {
    if (x1 > x3)
    {
      if (x1 > x4)
      {
        printf("Maxsimal son: %d", x1);
      }
      else
      {
        printf("Maxsimal son: %d", x4);
      }
    }
    else
    {
      if (x3 > x4)
      {
        printf("Maxsimal son: %d", x3);
      }
      else
      {
        printf("Maxsimal son: %d", x4);
      }
    }
  }
  else
  {
    if (x2 > x3)
    {
      if (x2 > x4)
      {
        printf("Maxsimal son: %d", x2);
      }
      else
      {
        printf("Maxsimal son: %d", x4);
      }
    }
    else
    {
      if (x3 > x4)
      {
        printf("Maxsimal son: %d", x3);
      }
      else
      {
        printf("Maxsimal son: %d", x4);
      }
    }
  }

  return 0;
}
