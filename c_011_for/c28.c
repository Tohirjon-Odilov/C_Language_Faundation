#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d", &a);

	for(int i = 1; i * i <= a; i++){
		b = i;
		printf("\t%d * %d < %d\n", i, i, a);
	}
	printf("%d\n", b + 1);
	return 0;
}
