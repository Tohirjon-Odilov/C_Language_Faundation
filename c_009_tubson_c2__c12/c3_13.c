#include <stdio.h>

int main(){

	int num = 1;

	while(num < 4000){
		if(num % 3 == 0){
			if(num % 9 == 0){
				printf("%d\n", num);
				num++;
				continue;
			}
			printf("%d\n", num);
		}
		else if(num % 11 == 0)
			printf("%d\n", num);
		num++;
	}

	return 0;

}
