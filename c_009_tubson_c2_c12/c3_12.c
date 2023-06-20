#include <stdio.h>

int main()
{

	int num = 25;

	while (num < 690)
	{
		if (num % 45 == 0) // num % 5 == 0 && num % 9 == 0
			printf("%d\n", num);
		num++;
	}

	return 0;
}
