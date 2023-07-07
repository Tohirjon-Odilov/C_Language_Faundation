#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int n;
	printf("Array uzunligini kiriting: "); scanf("%d", &n);
	int arr[n];

	for(int i = 0; i < n; i++){
		arr[i] = rand() % n;
	}

	int min = arr[0];
	int count = 0;

	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	puts("");

	for(int i = 1; i < n; i++){
		if(min > arr[i]){
			min = arr[i];
			count = i;
		}
	}

//	for(int i = 0; i < n; i++){
//		if(arr[i] > min)
//		count++;
//		else break;
//	}

	printf("%d", count);

	return 0;
}
