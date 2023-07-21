#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void output(int n, int arr[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", arr[i][j]);
		}
		puts("");
	}
	puts("");
}

void fill_arr(int n, int arr[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = rand() % 10;
		}
	}
	output(n,arr);
}

void get_max(int n, int arr1[][n], int arr2[][n], int arr3[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(arr1[i][j] < arr2[i][j]){
				arr3[i][j] = arr2[i][j];
			}else{
				arr3[i][j] = arr1[i][j];
			}
		}
	}
	output(n,arr3);
}

int main()
{
	srand(time(0));
	int n;
	scanf("%d", &n);
	int arr1[n][n];
	int arr2[n][n];
	int arr3[n][n];

	fill_arr(n,arr1);
	fill_arr(n,arr2);
	get_max(n,arr1,arr2,arr3);

	return 0;
}
