#include <stdio.h>

int main(){

	int num = 50;

	while(num < 440){
		if(num % 11 == 0)
			printf("%d\n", num);
		num++;
	}

	return 0;

}
