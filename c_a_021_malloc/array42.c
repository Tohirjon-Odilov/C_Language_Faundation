#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_arr(int arr[], int n){
	for(int i = 0; i < n; i++){
		arr[i] = rand() % 10;
		printf("%d ", arr[i]);
	}
}

void find(int arr[], int mas[], int n, int r){
	int a = abs(r-(arr[0]+arr[1]));
	int j = 0;
	for(int i = 1; i < n-1; i++){
		if(a > abs(arr[i]+arr[i+1]-r)){
			a = abs(arr[i]+arr[i+1]-r);
			j = i;
		}
	}
	printf("\n%d %d", arr[j], arr[j+1]);
}

int main()
{
	srand(time(0));
	int n,r;
	scanf("%d %d", &n, &r);
	int *arr = malloc(n*sizeof(n));
	int *mas = malloc(n*sizeof(n));

	fill_arr(arr,n);
	find(arr,mas,n,r);

	return 0;
}
