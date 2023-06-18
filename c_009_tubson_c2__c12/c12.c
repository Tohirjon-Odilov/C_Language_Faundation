#include <stdio.h>

int main()
{

	int i = 1;
	int num;

	printf("Son kiriting: ");
	scanf("%d", &num);

	while(i <= num){
		if(num % i == 0)
			printf("%d\n", i);
		i++;
	}

	return 0;

}
