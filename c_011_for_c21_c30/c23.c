#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d", &a);
	b = a * 2;
	for(; a <= b ; a++){
		printf("%d\n", a);
	}

	return 0;
}
