#include <stdio.h>

void fill_arr(int n, int arr[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = j+1;
			printf("%d", arr[i][j]);
		}
		puts("");
	}
	puts("");
}

void change(int n, int arr[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j == 0 || i == 0 || j == n-1 || i == n-1)
				arr[i][j] = 0;
			printf("%d", arr[i][j]);
		}
		puts("");
	}
}

int main()
{
	int n = 5;
	int arr[n][n];

	fill_arr(n,arr);

	change(n,arr);

	return 0;
}
