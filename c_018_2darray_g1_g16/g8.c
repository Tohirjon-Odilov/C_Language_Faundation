#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int n;
	scanf("%d", &n);
	int arr[n][n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = rand() % 10;
			printf("%d ", arr[i][j]);
		}
		puts("   ");
	}
	puts("");
	for(int i = 0; i < 1; i++){
		for(int j = 0; j < n; j++){
			printf("%d-ustunda %d ",j+1,arr[n-1][j]);
			puts("");
		}
	}

	return 0;
}
