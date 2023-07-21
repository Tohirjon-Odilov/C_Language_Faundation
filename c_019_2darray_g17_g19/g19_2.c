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
	puts("\nReverse row: ");
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
	puts("\nChange_star: ");
}

void change_star(int n, int arr[][n]){
	for(int i = 0,a=1; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a){
				if(j%2&&i%2==0){
					printf("* ");
				}else printf("%d ", arr[i][j]);
			}else{
				if(j%2==0&&i%2)printf("* ");
				else printf("%d ", arr[i][j]);
			}
		}
		if(i%2==0) a = 0;
		else a = 1;
		puts("");
	}
	puts("\nChange bolder: ");
}

void change_bolder_to_star(int n, int arr[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i==0||j==0||j==n-1||i==n-1){
				printf("%c ", j==i ? '+' : i+j==n-1? '+' : '*');
			}
			else printf("%d ", arr[i][j]);
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
	change_star(n,arr);
	change_bolder_to_star(n,arr);

	return 0;
}
