#include <stdio.h>

void fill_arr(int n, int arr[]){
	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
}

void change(int n, int arr[]){
	int max_i = 0, min_i = 0;
	for(int i = 1; i < n; i++){
		if(arr[max_i] < arr[i])	max_i = i;
		if(arr[min_i] > arr[i]) min_i = i;
	}
	printf("%d %d", arr[min_i], arr[max_i]);
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];

	fill_arr(n,arr);
	change(n,arr);

	return 0;
}
