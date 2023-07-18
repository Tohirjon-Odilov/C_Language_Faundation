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
	puts("Reverse row: ");
}

void fill_arr(int n, int arr[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = rand() % 10;
		}
	}
	output(n,arr);
}

void reverse_row(int n, int arr[][n]){
	for(int i = 0; i < n; i++){
		for(int j = n-1; j >= 0; j--){
			printf("%d ", arr[i][j]);
		}
		puts("");
	}
	puts("Reverse array: ");
}

void reverse_arr(int n, int arr[][n]){
	for(int i = n-1; i >= 0; i--){
		for(int j = n-1; j >= 0; j--){
			printf("%d ", arr[i][j]);
		}
		puts("");
	}
	puts("Change row and col: ");
}

void change_row(int n, int arr[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", arr[j][i]);
		}
		puts("");
	}
	puts("Only diagonals: ");
}

void show_diagonal(int n, int arr[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i==j)printf("%d ", arr[j][i]);
			else if(i+j == n-1) printf("%d ", arr[j][i]);
			else printf("  ");
		}
		puts("");
	}
	puts("");
}

int main()
{
	srand(time(0));
	int n;
	scanf("%d", &n);
	int arr[n][n];

	fill_arr(n,arr);
	reverse_row(n,arr);
	reverse_arr(n,arr);
	change_row(n,arr);
	show_diagonal(n,arr);

	return 0;
}
