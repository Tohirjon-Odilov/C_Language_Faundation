#include <stdio.h>

int main()
{
#if 1

   int singleNum, max, num;
   printf("Son kiriting: ");
   scanf("%d", &num);

   while (num > 0)
   {
      singleNum = num % 10;
      num /= 10;
      max = singleNum > max ? singleNum : max;
   }
   printf("%d\n", max);

#endif
   return 0;
}
