#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void output(int n, int arr[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%3d ", arr[i][j]);
		}
		puts("");
	}
	puts("");
}

void fill_arr(int n, int arr[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = -10 + rand() % 15;
		}
	}
	output(n,arr);
}

void change_value(int n, int arr[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%c ",arr[i][j]<0 ? '-' : arr[i][j]>0 ? '+' : '0');
//			if(arr[i][j] < 0){
//				printf("- ");
//			}else if(arr[i][j]){
//				printf("+ ");
//			}else printf("%d ", arr[i][j]);
		}
		puts("");
	}
}

int main()
{
	srand(time(0));
	int n;
	scanf("%d", &n);
	int arr[n][n];

	fill_arr(n,arr);
	change_value(n,arr);

	return 0;
}
