#include <stdio.h>

int main()
{
  int x1, x2, x3, x4;

  printf("4ta son kiriting: ");
  scanf("%d %d %d %d", &x1, &x2, &x3, &x4);

  if (x1 > x2 && x1 > x3 && x1 > x4)
  {
    printf("Maxsimal son: %d", x1);
  }
  else if (x2 > x3 && x2 > x4)
  {
    printf("Maxsimal son: %d", x2);
  }
  else if (x3 > x2 && x3 > x4)
  {
    printf("Maxsimal son: %d", x3);
  }
  else if (x4 > x2 && x4 > x3)
  {
    printf("Maxsimal son: %d", x4);
  }
  else
  {
    printf("Hamma sonlar teng");
  }
  return 0;
}