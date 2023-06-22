#include <stdio.h>

int main()
{

	int a,b = 0,c = 0;
	int res = 0;

	printf("A > B\n");

	printf("A = ");	scanf("%d", &a);
	printf("B = ");	scanf("%d", &b);
	res = b;
	for(int i = 1; i <= a; i++)
	{
		if(a >= res)
		{
			res += b;
			printf("%d ", b);
			c++;
		}
	}

	printf("A uzunlikda B kesma %d ta joylasha oladi.\n", c);
	printf("A kesmaning bo'sh qismi %d ga teng.\n", a % b);

	return 0;

}
