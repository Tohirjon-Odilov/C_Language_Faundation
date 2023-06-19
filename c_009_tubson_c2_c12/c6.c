#include <stdio.h>

int main (){

	int num = 42;

	while(num < 77){
		if(num % 3 == 0){
			num++;
			continue;
		}else if(num % 5 == 0){
			num++;
			continue;
		}
		printf("%d\n", num);
		num++;
	}

	return 0;

}
