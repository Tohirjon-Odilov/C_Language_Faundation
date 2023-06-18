#include <stdio.h>

int main()
{

	int a, b;

	printf("2 ta son kiriting: ");
	scanf("%d %d", &a, &b);

	if (a > b)
		b = a;
	else if (b > a)
		a = b;
	else if (a == b)
	{
		a = 0;
		b = 0;
	}

	printf("a = %d\nb = %d", a, b);

	return 0;
}
