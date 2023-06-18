#include <stdio.h>

int main(){

	int a,b;

	printf("2 ta son kiriting: ");
	scanf("%d%d", &a,&b);

	if(a > b){
	 printf("2 - dagi son kichkina.");
	}else if(a < b){
	 printf("1 - dagi son kichkina.");
	}else{
	 printf("Ikkala son ham bir-biriga teng.");
	}

	return 0;

}
