#include <stdio.h>

int main()
{

  int a, b, c, addaction;

  printf("3 ta son kiriting: ");
  scanf("%d %d %d", &a, &b, &c);

  addaction = a + b + c;

  if (a > b && a > c)
  {
    if (b > c)
      printf("%d", addaction - c);
    else
      printf("%d", addaction - b);
  }
  else if (b > a && b > c)
  {
    if (a > c)
      printf("%d", addaction - c);
    else
      printf("%d", addaction - a);
  }
  else if (c > b && c > a)
  {
    if (b > a)
      printf("%d", addaction - a);
    else
      printf("%d", addaction - b);
  }
  return 0;
}
