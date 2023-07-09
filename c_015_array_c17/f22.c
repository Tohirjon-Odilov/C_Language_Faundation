#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int n, max_i, min_i, max, min;
	scanf("%d", &n);
	int arr[n];

	for(int i = 0; i < n; i++){
		arr[i] = rand() % 15 - 5;
		printf("%d ", arr[i]);
	}
	puts("");
	max = arr[0];
	min = arr[0];

	for(int i = 1; i < n; i++){
		if(max < arr[i]){
			max = arr[i];
			max_i = i;
		}
		if(min > arr[i]){
			min = arr[i];
			min_i = i;
		}
	}
	max = arr[max_i];
	arr[max_i] = arr[min_i];
	arr[min_i] = max;

//	for(int i = 0; i < n; i++){
//		if(arr[i] == max) arr[i] = min;
//		if(arr[i] == min) arr[i] = max;
//	}
//3//
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}
