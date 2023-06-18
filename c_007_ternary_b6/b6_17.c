#include <stdio.h>

int main()
{

  float a, b, c;

  printf("3 ta haqiqiy son kiriting: ");
  scanf("%f %f %f", &a, &b, &c);

  if (a < b && b < c)
  {
    a *= a;
    b *= b;
    c *= c;
    printf("Sonlar o'sish tartibida kiritilgan.");
    printf("Sonlar ikkilantirildi:\na = %.1f\nb = %.1f\nc = %.1f", a, b, c);
  }
  else if (a > b && b > c)
  {
    a *= a;
    b *= b;
    c *= c;
    printf("Sonlar kamayish tartibida kiritilgan.");
    printf("Sonlar ikkilantirildi:\na = %.1f\nb = %.1f\nc = %.1f", a, b, c);
  }
  else
  {
    a *= -1;
    b *= -1;
    c *= -1;
    printf("Sonlar tartibsiz holatda kelgan.");
    printf("Sonlarning ishorasi o'zgartirildi:\na = %.1f\nb = %.1f\nc = %.1f", a, b, c);
  }

  return 0;
}
