#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_arr(int arr[], int n){
	for(int i = 0; i < n; i++){
		arr[i] = rand() % 100;
		printf("%d ", arr[i]);
	}
}

void find(int arr[], int n){
	int a = 0;
	int sum = arr[0] + arr[1];
	for(int i = 1; i < n-1; i++){
		if(sum < arr[i]+arr[i+1]){
			sum = arr[i]+arr[i+1];
			a = i;
		}
	}
	printf("\n%d %d", arr[a], arr[a+1]);
}

int main()
{
	srand(time(0));
	int n;
	scanf("%d", &n);
	int *arr = malloc(n*sizeof(int));

	fill_arr(arr, n);
	find(arr, n);

	return 0;
}
