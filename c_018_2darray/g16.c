#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int n;
	printf("n = "); scanf("%d", &n);
	int arr[n][n];

	for(int q = 0; q < n; q++){
		for(int u = 0; u < n; u++){
			arr[q][u] = rand() % 25-5;
		}
	}

	for(int q = 0; q < n; q++){
		for(int u = 0; u < n; u++){
			printf("%2d ", arr[q][u]);
		}
		printf("\n");
	}

	puts("Change:");

	for(int q = 0; q < n; q++){
		for(int u = 0; u < n; u++){
			printf("%2d ", arr[u][q]);
		}
		puts("");
	}
	return 0;
}
