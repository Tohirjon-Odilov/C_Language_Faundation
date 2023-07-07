#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));

	int arr[10];

	for(int i = 0; i < 10; i++){
		arr[i] = rand() % 100;
	}

	int second_max;

	for(int i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}

	puts("");

	for(int i = 0; i < 10; ++i){
        for(int j = i + 1; j < 10; ++j){
            if(arr[i] > arr[j]){
                second_max = arr[i];
                arr[i] = arr[j];
                arr[j] = second_max;
            }
        }
		second_max = arr[8];
    }

	printf("second max = %d", second_max);


	return 0;
}
