#include <stdio.h>
void num(int a){
  if(a%2==0)
        a++;
  else
	a+=2;
  printf("%d",a);
}

int main(){
	int a;
	scanf("%d",&a);
	num(a);
	return 0;
}
