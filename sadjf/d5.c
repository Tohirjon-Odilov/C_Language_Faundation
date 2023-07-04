#include <stdio.h>
void num(char a){
  if(a>=97 && a<=122)
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
