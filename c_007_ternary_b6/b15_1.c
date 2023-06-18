#include <stdio.h>

int main()
{

  int x1, x2, x3, x4, x5;

  printf("5ta son kiriting: ");
  scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);

  if (x1 > x2)
  {
    if (x1 > x3)
    {
      if (x1 > x4)
      {
        if (x1 > x5)
        {
          printf("Maxsimal son: %d", x1);
        }
        else
        {
          printf("Maxsimal son: %d", x5);
        }
      }
      else
      {
        if (x4 > x5)
        {
          printf("Maxsimal son: %d", x4);
        }
        else
        {
          printf("Maxsimal son: %d", x5);
        }
      }
    }
    else
    {
      if (x3 > x4)
      {
        if (x3 > x5)
        {
          printf("Maxsimal son: %d", x3);
        }
        else
        {
          printf("Maxsimal son: %d", x5);
        }
      }
      else
      {
        if (x4 > x5)
        {
          printf("Maxsimal son: %d", x4);
        }
        else
        {
          printf("Maxsimal son: %d", x5);
        }
      }
    }
  }

  else
  {
    if (x2 > x3)
    {
      if (x2 > x4)
      {
        if (x2 > x5)
        {
          printf("Maxsimal son: %d", x2);
        }
        else
        {
          printf("Maxsimal son: %d", x5);
        }
      }
      else
      {
        if (x4 > x5)
        {
          printf("Maxsimal son: %d", x4);
        }
        else
        {
          printf("Maxsimal son: %d", x5);
        }
      }
    }
    else
    {
      if (x3 > x4)
      {
        if (x3 > x5)
        {
          printf("Maxsimal son: %d", x3);
        }
        else
        {
          printf("Maxsimal son: %d", x5);
        }
      }
      else
      {
        if (x4 > x5)
        {
          printf("Maxsimal son: %d", x4);
        }
        else
        {
          printf("Maxsimal son: %d", x5);
        }
      }
    }
  }

  return 0;
}