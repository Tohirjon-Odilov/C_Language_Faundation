#include <stdio.h>
void num(int a,int b){
  while(a>=1){
	b+=a%10;
	a/=10;
  }
  printf("%d",b);
}

int main(){
	int a, b=0;
	scanf("%d",&a);
	num(a,b);
	return 0;
}
