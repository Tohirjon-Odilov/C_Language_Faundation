#include <stdio.h>

int main(){

	int i = 40;
	int num = 180;

	while(i < num){
		if(i % 7 == 0)
			printf("%d\n", i);
		i++;
	}

	return 0;

}
