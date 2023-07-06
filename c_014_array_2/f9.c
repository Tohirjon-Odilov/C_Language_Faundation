#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	srand(time(0));

	int arr[10];
	int musbat = 0, manfiy = 0;

	for(int i = 0; i < 10; i++){
		arr[i] = -50 + rand() % 100;
	}

	for(int i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
	puts("");
	for(int i = 0; i < 10; i++){
		if(arr[i] < 0)
			manfiy += arr[i];
		else
			musbat += arr[i];
	}

	printf("%d - (%d) = %d", musbat, manfiy, musbat - manfiy);

	return 0;
}
