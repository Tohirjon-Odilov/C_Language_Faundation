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
void square(int n, int arr[][n]){
	for(int i = 0, sum = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i==0||j==0||j==n-1||i==n-1||j+j==n-1||i==j||i+j==n-1){
				printf("* ");
			}
			else printf("  ");
		}
		puts("");
	}
}

void output(int n, int arr[][n]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", arr[i][j]);
		}
		puts("");
	}
}

int main(){
begin:
system("clear");
	srand(time(0));
	int n;
//	scanf("%d",&n);
	int arr[n][n];

//	fill_arr(n,arr);

	square(n,arr);
goto begin;
	return 0;
}
