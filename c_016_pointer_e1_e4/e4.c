#include <stdio.h>

int main()
{
	int a = 10, b = 20;
	printf("a = %d b = %d", a, b);

	puts("");

	int *replace = &a;
	*replace = b + *replace;
	b = *replace - b;
	*replace -= b;

	printf("a = %d b = %d", a, b);

	return 0;
}
