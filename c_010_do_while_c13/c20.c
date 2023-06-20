#include <stdio.h>

int main()
{

	int num;
	int res = 0, odd = 0, even = 0;

	printf("Son kiriting: ");
	scanf("%d", &num);

	if (num > 0)
	{
		do
		{
			res = num % 10;
			if (!(res % 2))
				even += res;
			else if (res % 2)
				odd += res;
			num /= 10;
		} while (num > 0);
		printf("%d", even - odd);
	}
	else if (num == 0)
	{
		printf("Kiritilgan son 0 teng!");
	}
	else
	{
		printf("Manfiy son kiritdingiz!!!");
	}

	return 0;
}
