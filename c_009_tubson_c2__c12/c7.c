#include <stdio.h>

int main()
{

	int num = 15;

	while(num <= 22){
		if(num % 2 == 0){
			printf("%d\n", num * -1);
			num++;
			continue;
		}
		printf(" %d\n", num);
		num++;
	}

}
