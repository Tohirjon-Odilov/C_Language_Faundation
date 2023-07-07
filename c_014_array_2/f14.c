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

	int min = arr[0];

	for(int i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}

	puts("");

//	for(int i = 0; i < 10; ++i){
//        for(int j = i + 1; j < 10; ++j){
//            if(arr[i] > arr[j]){
//                second_min = arr[i];
//                arr[i] = arr[j];
//                arr[j] = second_min;
//            }
//        }
//		second_min = arr[1];
//    }


	for(int i = 0; i < 10; i++){
		if(arr[i] < min)
			min = arr[i];
	}

	int second_min;

	for(int i = 0; i < 10; i++){
		if(arr[i] != min){
			second_min = arr[i];
			break;
		}
	}

	for(int i = 0; i < 10; i++){
		if(arr[i] < second_min && arr[i] != min)
			second_min = arr[i];
	}



	printf("second min = %d", second_min);


	return 0;
}
