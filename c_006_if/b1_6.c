#include <stdio.h>

int main(){

	int a,b;

	printf("Son kiriting: ");
	scanf("%d%d", &a,&b);

	if(a > b){
	 printf("Eng katta son => %d", a);
	}else if(a < b){
	 printf("Eng katta son => %d", b);
	}else{
	 printf("Sonlar teng: %d == %d", a,b);
	}

	return 0;

}
