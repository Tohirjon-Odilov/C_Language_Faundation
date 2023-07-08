#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int n, k = 1;
	scanf("%d", &n);
	int arr[n];
	scanf("%d", &k);
	int new_arr[k];
	int j = 0;

	for(int i = 0; i < n; i++){
		arr[i] = 8 + rand() % 13;
		printf("%d ", arr[i]);
		if(i < k){
			new_arr[i] = arr[i];
		}
	}
	puts("");

	for(int i = 0; i < n; i++){
		if(i < n-k) arr[i] = arr[i+k];
	}

	for(int i = n-k; i < n; i++){
		arr[i] = new_arr[j++];
	}

	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}


	return 0;
}
