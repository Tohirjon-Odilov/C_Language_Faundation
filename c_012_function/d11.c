#include <stdio.h>

int middle(int a, int b, int c){
  int max = a;
  if(max < b){
    max = b;
    if(a > c)
      return a;
    return c;
  }
  else if(max < c){
    max = c;
    if(a > b)
      return a;
    return b;
  }else{
    if(c > b)
      return c;
    return b;
  }
}

int main(){

  int a,b,c;
  printf("3 ta son kiriting: "); scanf("%d %d %d", &a, &b, &c);

  printf("%d", middle(a,b,c));

  return 0;
}
