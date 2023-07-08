#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));

	int n;
	printf("Array hajmini kiriting: "); scanf("%d", &n);
	int arr[n];

	for(int i = 0; i < n; i++){
		arr[i] = -12 + rand() % 38;
	}

	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	puts("");

	for(int i = 0; i < n; i++){
		if(arr[i] < 0)
			arr[i] = 0;
		else
			arr[i] = 1;
	}

	for(int i = 0; i < n; i++){
		printf("%d", arr[i]);
	}

	return 0;
}
