#include <stdio.h>

int main()
{

	int a,b;
	int res = 0;

	printf("Son kiriting: ");
	scanf("%d %d", &a, &b);

	do{
		res += a;
		a++;
	}while(a <= b);
	printf("%d", res);

	return 0;

}
