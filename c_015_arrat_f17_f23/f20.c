#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_arr(int n, int arr[]){
	for(int i = 0; i < n; i++) arr[i] = rand() % 10;
}

void output(int n, int arr[]){
	for(int i = 0; i < n; i++) printf("%d ", arr[i]);
	puts("");
}

void push_arr(int n, int arr[]){
	int j = arr[n-1];
	for(int j = n - 1; j > 0; j--) arr[j] = arr[j-1];
	arr[0] = j;
}

int main()
{
	srand(time(0));
	int n,k;
	scanf("%d %d", &n, &k);
	int arr[n];

	fill_arr(n, arr);
	output(n, arr);

	k %= n;
	for(int i = 0; i < k; i++) push_arr(n,arr);
	output(n,arr);

	return 0;
}

