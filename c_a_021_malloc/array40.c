#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void fill_arr(int arr[], int n){
	for(int i = 0; i < n; i++){
		arr[i] = rand() % 10;
		printf("%d ", arr[i]);
	}
}

void find_arr(int arr[], int n, int r){
	int min = abs(arr[0] - r);
	int j = 0;
	for(int i = 1; i < n; i++){
		if(min > abs(arr[i]-r)){
			min = abs(arr[i]-r);
			j = i;
		}
	}
	printf("\n%d", arr[j]);
}

int main()
{
	srand(time(0));
	int n,r;
	scanf("%d %d", &n, &r);
	int *arr = malloc(n*sizeof(int));
	fill_arr(arr, n);
	find_arr(arr, n, r);

	return 0;
}
