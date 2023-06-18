#include <stdio.h>

int main()
{

	int i = 1, res = 0;
	int num;

	printf("Son kiriting: ");
	scanf("%d", &num);

	while(i < num){
		res = i * i;
		if(num < res)
			break;
		printf("%d\n", res);
		i++;
	}

	return 0;

}
