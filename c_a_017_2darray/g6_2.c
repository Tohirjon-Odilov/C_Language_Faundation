#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void output(int n, int m, int arr[][n]);

void fill_arr(int n, int m, int arr[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			arr[i][j] = rand() % 10;
		}
	}
	output(n,m,arr);
}

void col_addaction(int n, int m, int arr[][n]){
	for(int i = 0, sum = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			sum += arr[j][i];
		}
		printf("%d ustundagi sonlar yig'indisi %d ga teng.\n", i+1, sum);
		sum = 0;
	}
}

void output(int n, int m, int arr[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ", arr[i][j]);
		}
		puts("");
	}
}

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int arr[n][m];

	fill_arr(n,m,arr);
	col_addaction(n,m,arr);
	return 0;
}
