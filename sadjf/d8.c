#include <stdio.h>

int SonTub(int a){

  if(a == 1)
    return 0;
  else if (a == 2)
    return 1;
  while(a > 0){
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
