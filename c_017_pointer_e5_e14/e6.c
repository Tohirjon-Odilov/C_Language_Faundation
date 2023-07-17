#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void output(int arr[], int n){
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	puts("");
}

void fill_arr(int arr[], int n){
	for(int i = 0; i < n; i++)
		arr[i] = rand() % 10;
	output(arr,n);
}

void change(int arr[], int n){
	int *temp = &arr[n];
	*temp = arr[0];
	arr[0] = arr[n-1];
	arr[n-1] = *temp;
	output(arr,n);
}

int main()
{
	srand(time(0));
	int n;
	scanf("%d", &n);
	int arr[n];

	fill_arr(arr,n);
	change(arr,n);

	return 0;
}
