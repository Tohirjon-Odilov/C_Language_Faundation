#include <stdio.h>

int main()
{

	int res = 0;
	int num;

	scanf("%d", &num);

	if (num > 0)
	{
		do
		{
			res = num % 10 + res;
			num /= 10;

			printf("%d\n", res);
		} while (0 < num);
	}
	return 0;
}
