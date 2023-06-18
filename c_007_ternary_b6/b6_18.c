#include <stdio.h>

int main()
{

  int a, b, c;

  printf("2 bir xil son va 1 ta istalgan haqiqiy son kiriting: ");
  scanf("%d%d%d", &a, &b, &c);

  if (a == b && a == c)
  {
    printf("Iltimos 2 bir xil va 1 ta istalgan haqiqiy son kiriting!");
  }
  else if (a == b && a != c)
  {
    printf("3 - dagi yolg'iz son = %d", c);
  }
  else if (a == c && a != b)
  {
    printf("2 - dagi yolg'iz son = %d", b);
  }
  else if (b == c && b != a)
  {
    printf("1 - dagi yolg'iz son = %d", a);
  }
  else
  {
    printf("Uchala son ham har-xil!?");
  }

  return 0;
}
