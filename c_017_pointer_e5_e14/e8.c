#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void output(int arr[], int n);

void fill_arr(int arr[], int n){
	for(int i = 0; i < n; i++) arr[i] = rand() % 100;
	output(arr,n);
}

void output(int arr[], int n){
	for(int i = 0; i < n; i++) printf("%d ", arr[i]);
	puts("");
}

void change(int arr[], int n){
	int *max = &arr[n];
	int *min = &arr[n+1];
	*max = arr[0];
	*min = arr[0];
	for(int i = 1; i < n; i++){
		if(*max < arr[i]) *max = arr[i];
		else if(*min > arr[i]) *min = arr[i];
	}
	for(int i = 0; i < n; i++){
		if(*max == arr[i]) arr[i] = *min;
		else if(*min == arr[i]) arr[i] = *max;
	}
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
