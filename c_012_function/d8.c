#include <stdio.h>

int SonTub(int a){

  if (a < 2)
    return 0;
  while(a > 2){
    if(!(a % 2))
      return 0;
    else
      return 1;
  }
}

int main(){

  int num;

  printf("Son kiriting: "); scanf("%d", &num);
  printf("%d", SonTub(num));

  return 0;
}
