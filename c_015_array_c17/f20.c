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
		arr[i] = rand() % 10;
		printf("%d ", arr[i]);
	}
	puts("");

	for(int i = 0; i < k; i++){
		j = arr[n-1];
		for(int j = n - 1; j > 0; j--){
			arr[j] = arr[j-1];
		}
		arr[0] = j;
	}

	for(int i = 0; i < n; i++) printf("%d ", arr[i]);


	return 0;
}

