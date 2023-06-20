#include <stdio.h>

int main()
{

	int a,b;
	int res = 0;

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);

	do{
		res += a;
		a++;
	}while(a <= b);
	printf("%d", res);

	return 0;

}
