#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int arr[n][m];
	int arr2[n][m];
	int arr3[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &arr2[i][j]);
		}
	}
	puts("");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			arr3[i][j] = arr[i][j] + arr2[i][j];
			printf("%d ", arr3[i][j]);
		}
		puts("");
	}

	return 0;
}
