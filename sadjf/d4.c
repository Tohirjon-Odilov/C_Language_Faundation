#include <stdio.h>

void num(char a){
  if(a>=65 && a<=90)
	printf("1");
  else
	printf("0");
}

int main(){
	char a;
	scanf("%c",&a);
	num(a);
	return 0;
}
