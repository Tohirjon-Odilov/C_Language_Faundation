#include <stdio.h>

int main()
{
#if 1

   int n;
   int i = 1;
   printf("Son kiriting: ");

   if (n > 0)
   {
      while (i < n)
      {
         printf("%d", 1 % 10);
         n /= 10;
      }
   }
#endif
}