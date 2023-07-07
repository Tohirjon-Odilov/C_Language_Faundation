#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];

	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	int max = arr[0], min = arr[0];

	for(int i = 0; i < n; i++){
		if(max < arr[i]) max = arr[i];
		if(min > arr[i]) min = arr[i];
	}

	for(int i = 0; i < n; i++){
		if(max == arr[i]) arr[i] = min;
		printf("%d ", arr[i]);
	}

	return 0;
}
