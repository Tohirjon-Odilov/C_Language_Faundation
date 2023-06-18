#include <stdio.h>

int main(){

	int num;

	printf("Son kiriting: ");
	scanf("%d", &num);

	if(num > 0){
	  printf("%d", ++num);
	}else{
	  printf("%d", num += 2);
	}

	return 0;

}
