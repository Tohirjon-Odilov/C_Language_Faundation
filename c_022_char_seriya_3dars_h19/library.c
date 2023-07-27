#include <stdio.h>
#include <string.h>


int main () {
   const char haystack[20] = "Tutorials Point";
   const char needle[10] = " ";
   char *ret;

   ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);

   return(0);
}
