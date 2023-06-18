#include <stdio.h>

int main()
{

  int a, b, c, d;
  printf("3 bir xil va 1 ta istalgan son kiriting: ");
  scanf("%d%d%d%d", &a, &b, &c, &d);

  if (a == b && a == c && a == d)
  {
    printf("Iltimos 3 ta bir xil va 1 ta istalgan haqiqiy son kiriting!");
  }
  else if (a == b && b == c && a != d)
  {
    printf("4 - dagi yolg'iz son = %d", d);
  }
  else if (a == b && b == d && a != c)
  {
    printf("3 - dagi yolg'iz son = %d", c);
  }
  else if (a == d && d == c && a != b)
  {
    printf("2 - dagi yolg'iz son = %d", b);
  }
  else if (b == c && b == d && b != a)
  {
    printf("1 - dagi yolg'iz son = %d", a);
  }
  else if (a == b && d == c || a == d && b == c || a == c && d == b)
  {
    printf("2 tadan bir xil son mavjud!");
  }
  else
  {
    printf("Bir xil sonlar 3 ta emas!?");
  }

  return 0;
}
