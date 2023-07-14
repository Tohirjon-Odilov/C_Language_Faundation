#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void output(int arr[], int n);

void fill_arr(int arr[], int n, int *positive, int *negative, int *zero){
	for(int i = 0; i < n; i++){
		arr[i] = rand() % 48 - 23;
		if(arr[i] < 0) *positive+=1;
		else if(arr[i] > 0) *negative+=1;
		else if(arr[i] == 0) *zero+=1;
	}
	output(arr,n);
}

void change(int arr[],int n, int positive_arr[], int negative_arr[], int zero_arr[]){
	int a = 0,b = 0,c = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] > 0){
			positive_arr[a] = arr[i];
			a++;
			continue;
		}
		else if(arr[i] < 0){
			negative_arr[b] = arr[i];
			b++;
			continue;
		}
	}
}

void output(int arr[], int n){
	for(int i = 0; i < n; i++) printf("%d ", arr[i]);
	puts("");
}

int main()
{
	srand(time(0));
	int n;
	int positive = 0, negative = 0, zero = 0;
	scanf("%d", &n);
	int arr[n], positive_arr[positive],negative_arr[negative],zero_arr[zero];

	fill_arr(arr,n,&positive,&negative,&zero);
	change(arr,n,positive_arr,negative_arr,zero_arr);
	output(positive_arr, positive);
//	output(negative_arr, negative);
//	output(zero_arr, zero);

	return 0;
}
