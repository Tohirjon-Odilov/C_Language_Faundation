#include <stdio.h>

int main(){

	int num = 90;

	while(num < 210){
		if(num % 25 == 0)
			printf("%d\n", num);
		num++;
	}

	return 0;

}
