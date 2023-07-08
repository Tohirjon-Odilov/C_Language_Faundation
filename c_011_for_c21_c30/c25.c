#include <stdio.h>

int main()
{

	int a,b,c;

	printf("A > B\n");

	printf("A = ");	scanf("%d", &a);
	printf("B = ");	scanf("%d", &b);

	for(c = 0; b <= a; c++){
		a -= b;
	}

	printf("A uzunlikda B kesma %d ta joylasha oladi.\n", c);
	printf("A kesmaning bo'sh qismi %d ga teng.\n", a);

	return 0;

}
