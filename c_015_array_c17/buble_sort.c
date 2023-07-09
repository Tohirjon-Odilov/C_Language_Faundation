#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int arr[10];
	int a;

	for(int i = 0; i < 10; i++){
		arr[i] = rand() % 100;
		printf("%d ", arr[i]);
	}
	puts("");
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(arr[i] < arr[j]){
				a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
		}
	}

	for(int i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}
