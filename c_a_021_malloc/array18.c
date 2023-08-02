#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_arr(int arr[], int n){
	for(int i = 0; i < n-1; i++){
		arr[i] = rand()%100;
		printf("%d ", arr[i]);
	}
        arr[n-1] = 11;
        printf("%d ", arr[n-1]);

	puts("");
}

void min_sec(int arr[], int n){
	int min = 0;
	for(int i = n-1; i >= 0; i--){
		if(arr[n-1] > arr[i]){
			min = arr[i];
			break;
		}
	}
	printf("%d", min);
}

int main()
{
	srand(time(0));
	int n;
	scanf("%d", &n);
	int *arr = malloc(n*sizeof(int));

	fill_arr(arr, n);
	min_sec(arr, n);

	return 0;
}
