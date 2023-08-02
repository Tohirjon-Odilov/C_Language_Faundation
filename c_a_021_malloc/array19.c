#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_arr(int arr[], int n){
	arr[0] = 2;
	printf("%d ", arr[0]);
	for(int i = 1; i < n-1; i++){
		arr[i] = rand() % 100;
		printf("%d ", arr[i]);
	}
	arr[n] = 30;
	printf("%d", arr[n]);
}

void find_avr(int arr[], int n){
	for(int i = n-2; i > 0; i--){
		if(arr[0] < arr[i] && arr[n-1] > arr[i]){
			printf("avarage %d", arr[i]);
			break;
		}
//		else if (){
//			printf("Natija: 0");
//		}
	}
}

int main()
{
	srand(time(NULL));
	int n;
	scanf("%d", &n);
	int *arr = malloc(n*sizeof(int));

	fill_arr(arr,n);
	find_avr(arr,n);

	return 0;
}
