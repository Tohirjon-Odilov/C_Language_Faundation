#include <stdio.h>

int main()
{

	int num = 20;

	while(num < 420){
		if(num % 5 == 0){
			if(num % 10 == 0){
				num++;
				continue;
			}
			printf("%d\n", num);
		}
		num++;
	}

}
