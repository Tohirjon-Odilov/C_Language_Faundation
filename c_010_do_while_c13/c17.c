#include <stdio.h>

int main()
{

	int n;
	int res = 0;
	int i = 1;

	printf("Son kiriting: ");
	scanf("%d", &n);

	do{
		res = res + i;
		i++;
	}while(i <= n);

	printf("%d", res);

	return 0;

}
