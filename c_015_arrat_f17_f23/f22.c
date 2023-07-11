#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_arr(int n, int arr[]){
	for(int i = 0; i < n; i++) arr[i] = rand() % 15 - 5;
}

void change(int n, int arr[]){
	int max_i = 0, min_i = 0;
	for(int i = 1; i < n; i++){
		if(arr[max_i] < arr[i])	max_i = i;
		if(arr[min_i] > arr[i]) min_i = i;
	}
	int temp = arr[max_i];
	arr[max_i] = arr[min_i];
	arr[min_i] = temp;
}

void output(int n, int arr[]){
	for(int i = 0; i < n; i++) printf("%d ", arr[i]);
	puts("");
}

int main()
{
	srand(time(0));
	int n;
	scanf("%d", &n);
	int arr[n];

	fill_arr(n,arr);
	output(n,arr);
	change(n,arr);
	output(n,arr);

	return 0;
}
