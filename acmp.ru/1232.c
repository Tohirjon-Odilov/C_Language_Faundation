#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int arr[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	int sum = 0, sum2 = 0;
	for(int i = 0; i < n; i++){
		sum = 0;
		for(int j = 0; j < m; j++){
			sum += arr[i][j];
		}
		printf("%d ", sum);
	}
	puts("");
	for(int i = 0; i < m; i++){
		sum2 = 0;
		for(int j = 0; j < n; j++){
			sum2 += arr[j][i];
		}
		printf("%d ", sum2);
	}
	puts("\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ", arr[i][j]);
		}
		puts("");
	}


	return 0;
}
