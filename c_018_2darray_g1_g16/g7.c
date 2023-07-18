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

	for(int i = 0; i < n; i++){
		int max = arr[i][0];
		for(int j = 0; j < n; j++){
			if(max<arr[i][j]) max = arr[i][j];
		}
		printf("%d - qatorda %d\n",i+1,max);
	}

	return 0;
}
