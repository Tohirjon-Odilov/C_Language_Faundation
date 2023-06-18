#include <stdio.h>

int main(){

	int num;

	printf("Son kiriting: ");
	scanf("%d", &num);

	if(num > 0){
	  printf("%d", ++num);
	}else if(num < 0){
	  printf("%d", num += 2);
	}else{
	  printf("%d", num = 10);
	}

	return 0;

}
