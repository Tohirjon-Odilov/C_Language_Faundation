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
		arr[i] = 14 + rand() % 21;
	}

	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	puts("");

	for(int i = 0; i < n; i++){
		if(!(arr[i] % 2))
			printf("+");
		else
			printf("%d", arr[i]);
	}

	return 0;
}
