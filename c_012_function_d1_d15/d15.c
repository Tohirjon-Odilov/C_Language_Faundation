#include <stdio.h>
void num(int a,int b){
  while(a>=1){
      b+=a%10;
      a/=10;
  }
  if(b%2==0)
    printf("true");
  else
    printf("false");
  }
int main(){
  int a,b=0;
  scanf("%d",&a);
  num(a,b);
  return 0;
}
