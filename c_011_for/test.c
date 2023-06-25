#include <stdio.h>

int main()
{

	int i = 1;
//	if(1 == 01){
//		printf("salom");
//	}
	while(i * (i + 1) < 81){
		printf("%d \n", i);
		i*=3;
	}

	return 0;
}
