#include <stdio.h>
void num (int a){
  if(a>0)
	printf("musbat");
  else if(a<0)
	printf("manfiy");
  else 
	printf("notogri");
}

int main(){
	int a;
	scanf("%d",&a);
	num(a);
	return 0;	
}
