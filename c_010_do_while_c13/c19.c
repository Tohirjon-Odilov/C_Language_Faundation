#include <stdio.h>

int main()
{

	int num;

	printf("Son kiriting: ");
	scanf("%d", &num);

	if (num > 0)
	{
		do
		{
			num /= 10;
		} while (num >= 10);
		printf("%d\n", num);
	}
	else if (num == 0)
	{
		printf("Kiritilgan son 0 ga teng!");
	}
	else
	{
		printf("Siz manfiy son kiritdingiz!!!");
	}

	return 0;
}
