#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int n;
	scanf("%d", &n);
	int arr[n];

	for(int i = 0; i < n; i++){
		arr[i] = -15 + rand() % 23;
		printf("%d ", arr[i]);
	}
	puts("");
	int r = arr[n-1];

	for(int i = n; i > 0; i--){
		arr[i] = arr[i - 1];
	}

	arr[0] = r;

	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}
