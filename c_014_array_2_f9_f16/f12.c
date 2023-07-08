#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int n;
	printf("Array uzunligini kiriting: "); scanf("%d", &n);
	int arr[n];

	for(int i = 0; i < n; i++){
		arr[i] = -10 + rand() % 80;
	}

	int min = arr[0];

	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	puts("");

	for(int i = 1; i < n; i++){
		if(min > arr[i])
			min = arr[i];

	}

	printf("%d", min);

	return 0;
}
