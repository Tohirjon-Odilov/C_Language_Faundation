#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_arr(int n, int arr[]){
	for(int i = 0; i < n; i++){
		arr[i] = rand()%11;
		printf("%d ", arr[i]);
	}
	puts("");
}

void sum(int n, int arr[]){
	int max = arr[0], min = arr[0];
	int j = 0, k = 0, add = 0;

	for(int i = 1; i < n; i++){
		if(max<arr[i]){
			max = arr[i];
			j = i;
		}
		if(min>arr[i]){
			min = arr[i];
			k = i;
		}
	}
	printf("max = %d\nmin = %d", j,k);
	int temp;
	if(j > k){
		temp = j;
		j = k;
		k = temp;
	}
	for(int i = j+1; i < k; i++){
		add += arr[i];
	}
	printf("\n%d", add);

}

int main()
{
	srand(time(NULL));
	int n;
	scanf("%d", &n);
	int arr[n];

	fill_arr(n,arr);

	sum(n,arr);

	return 0;
}
