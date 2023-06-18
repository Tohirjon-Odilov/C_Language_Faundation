#include <stdio.h>

int main()
{

	int num = 8, res = 0;

	while(num < 18){
		if(num % 4 == 0){
			num++;
			continue;
		}
		res += num;
		num++;
	}
	printf("%d\n", res);

}
