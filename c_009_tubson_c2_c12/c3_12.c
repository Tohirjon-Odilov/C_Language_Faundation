#include <stdio.h>

int main(){

	int num = 25;

	while(num < 690){
		if(num % 5 == 0)
			printf("%d\n", num);
		else if(num % 9 == 0)
			printf("%d\n", num);
		num++;
	}

	return 0;

}
