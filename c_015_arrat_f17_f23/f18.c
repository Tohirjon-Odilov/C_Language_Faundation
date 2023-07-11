#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_arr(int n, int arr[]){
	for(int i = 0; i < n; i++)
		arr[i] = -15 + rand() % 23;
}

void output(int n, int arr[]){
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	puts("");
}

void change(int n, int arr[]){
	int r = arr[n-1];
	for(int i = n; i > 0; i--)
		arr[i] = arr[i - 1];
	arr[0] = r;
}

int main()
{
	srand(time(0));
	int n;
	scanf("%d", &n);
	int arr[n];

	fill_arr(n,arr);
	output(n,arr);
	change(n,arr);
	output(n,arr);

	return 0;
}
