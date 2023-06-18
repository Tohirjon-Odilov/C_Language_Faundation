#include <stdio.h>

int main()
{

	int a, b, c;

	printf("3 ta son kiriting: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a < b && a < c)
	{
		printf("Eng kichik son: %d", a);
	}
	else if (b < c && b < a)
	{
		printf("Eng kichik son: %d", b);
	}
	else if (c < b && c < a)
	{
		printf("Eng kichik son: %d", c);
	}
	else
	{
		printf("Siz raqam kiritmadingiz!?");
	}

	//      printf("a = %d\nb = %d", a,b);

	return 0;
}
