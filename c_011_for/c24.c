#include <stdio.h>

int main()
{
	int n, b;
	scanf("%d", &n);
	b = n * -1;
	for(; n >= b ; b++){
		printf("%d\n", b);
	}

	return 0;
}
