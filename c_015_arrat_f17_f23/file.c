#include <stdio.h>

int main(){

FILE *karra;

 int kar;
 scanf("%d", &kar);

 karra= fopen("karra", "w");

 for(int i=1;i<10;i++){

  fprintf(karra,"%d x %d = %d\n", i,kar,kar*i);
 }

 fclose(karra);

return 0;

}
