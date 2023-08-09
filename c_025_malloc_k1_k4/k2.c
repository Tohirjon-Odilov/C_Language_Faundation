#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	int num, max, min, avg;
	int j = 1, addaction = 0;
	float *data = (float *)malloc(j * sizeof(float));

	while (1)
	{
		puts("OB-havo ma'lumotlarini kiritish uchun <<1>> ni bosing.");
		puts("Eng yuqori haroratni ko'rish uchun <<2>> ni bosing.");
		puts("Eng past haroratni ko'rish uchun <<3>> ni bosing.");
		puts("O'rtacha haroratni ko'rish uchun <<4>> ni bosing.");
		puts("Chiqish uchun <<0>> ni bosing.\n");
		printf("SON KIRITING: "); scanf("%d", &num);

		if (num == 1)
		{
			printf("Kiriting: ");
			scanf("%f", &data[j++]);
			data = realloc(data, j);
		}
		else if (num == 2)
		{
		}
		else if (num == 3)
		{
		}
		else if (num == 4)
		{
			int size = sizeof(data) / sizeof(data[0]);
			for (int i = 0; i < j; i++)
				addaction += data[i];
			printf("%g",(float) addaction/size);
		}
		else if (num == 0)
		{
			exit(0);
		}
	}

	return 0;
}
