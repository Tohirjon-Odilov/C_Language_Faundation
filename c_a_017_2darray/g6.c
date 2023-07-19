#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void output(int n, int arr[][n]);

void fill_arr(int n, int arr[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = rand() % 10;
		}
	}
	output(n,arr);
}

void col_addaction(int nn int arr[][n]){
	for(int i = 0, sum = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			sum += arr[j][i];
		}
		printf("%d ustundagi sonlar yig'indisi %d ga teng.\n", i+1, sum);
		sum = 0;
	}
}

void output(int n, int arr[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ", arr[i][j]);
		}
		puts("");
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int arr[n][n];

	fill_arr(n,arr);
	col_addaction(n,arr);
	return 0;
}
