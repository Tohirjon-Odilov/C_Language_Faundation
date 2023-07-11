#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(){
	for(int i = 0; i < n; i++){
		arr[i] = rand() % 15 - 5;
		printf("%d ", arr[i]);
	}
}

int main()
{
	srand(time(0));
	int n, first_index, last_index;
	scanf("%d", &n);
	int arr[n];

	puts("");
	first_index = arr[0];
	last_index = arr[n-1];
	arr[0] = last_index;
	arr[n-1] = first_index;

	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}
