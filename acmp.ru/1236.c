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
	puts("");

	for(int i = n-1; i > -1; i--){
		for(int j = 0; j < m; j++){
			printf("%d ", arr[i][j]);
		}
		puts("");
	}

	return 0;
}
