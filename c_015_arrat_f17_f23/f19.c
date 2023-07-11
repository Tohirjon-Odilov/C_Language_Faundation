#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_arr(int n, int arr[]){
	for(int i = 0; i < n; i++)
		arr[i] = 8 + rand() % 13;
}

void change(int n, int arr[], int k){
	int temp;
	for(int i = 0; i < k; i++){
		temp = arr[0];
		for(int j = 0; j < n-1; j++)
			arr[j] = arr[j+1];
		arr[n-1] = temp;
	}
}

void output(int n, int arr[]){
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	puts("");
}

int main()
{
	srand(time(0));
	int n, k;
	scanf("%d %d", &n, &k);
	int arr[n];

	fill_arr(n,arr);
	output(n,arr);
	change(n,arr,k);
	output(n,arr);

	return 0;
}
