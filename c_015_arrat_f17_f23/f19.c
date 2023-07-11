#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_arr(int arr[], int n){
	for(int i = 0; i < n; i++)
		arr[i] = 8 + rand() % 21;
}

void output(int arr[], int n){
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	puts("");
}

void shift_arr(int arr[], int n){
	int first_number = arr[0];
	for(int i = 0; i < n-1; i++)
		arr[i] = arr[i+1];
	arr[n-1] = first_number;
}

int main()
{
	srand(time(0));
	int n, k;
	scanf("%d %d", &n, &k);
	int arr[n];

	fill_arr(arr,n);
	output(arr,n);
	k %= n;
	for(int i = 0; i < k; i++)
		shift_arr(arr,n);
	output(arr,n);

	return 0;
}
