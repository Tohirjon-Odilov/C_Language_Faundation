#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_arr(int n, int arr[], int k, int new_arr[]){
	for(int i = 0; i < n; i++){
		arr[i] = 8 + rand() % 13;
		if(i < k)
			new_arr[i] = arr[i];
	}
}

void change(int n, int arr[], int k, int new_arr[]){
	int j = 0;
	for(int i = 0; i < n; i++)
		if(i < n-k) arr[i] = arr[i+k];

	for(int i = n-k; i < n; i++)
		arr[i] = new_arr[j++];
}

void output(int n, int arr[]){
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	puts("");
}

int main()
{
	srand(time(0));
	int n, k = 1;
	scanf("%d %d", &n, &k);
	int arr[n];
	int new_arr[k];

	fill_arr(n,arr,k,new_arr);
	output(n,arr);
	change(n,arr,k,new_arr);
	output(n,arr);

	return 0;
}
