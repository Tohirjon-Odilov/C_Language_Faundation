#include <stdio.h>

int main()
{
	int n = 5;
	int arr[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	puts("");

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j || j+i == n-1)
				printf("%2d ", 0);
			else printf("%2d ", arr[i][j]);
		}
		puts("");
	}


	return 0;
}
