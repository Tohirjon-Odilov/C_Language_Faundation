#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));

	int n, num;
	scanf("%d", &n);
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = -5 + rand() % 30;
		printf("%d ", arr[i]);
	}
	num = arr[0];
	puts("");
	for (int i = 0; i + 1 < n - 1; i++)
	{
		if (i + 1 < n)
			arr[i] = arr[i + 1];
	}
	arr[n - 1] = num;

	puts("");

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
