#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void output(int arr[], int n);
void fill_arr(int arr[], int n, int *positive, int *negative, int *zero){
	int count = 0;
	for(int i = 0; i < n; i++){
		arr[i] = rand() % 48 - 23;
//		if(arr[i] < 0) *positive++;
//		else if(arr[i] > 0) *negative++;
//		else if(arr[i] == 0) *zero++;
	}
	for(int i = 0; i < n; i++){
		if(arr[i] < 0) *negative = *positive;
		else if(arr[i] > 0) *positive = ++count;
		else if(arr[i] == 0) *zero++;
//		*positive = i + 1;
	}
	output(arr,n);
	printf("%d", *zero);
}

void change(int arr[],int n, int pos_arr[], int neg_arr[], int zero_arr[]){
	
}

void output(int arr[], int n){
	for(int i = 0; i < n; i++) printf("%d ", arr[i]);
	puts("");
}

int main()
{
	srand(time(0));
	int n;
	int positive = 10, negative = 0, zero = 0;
	scanf("%d", &n);
	int arr[n], positive_arr[positive],negative_arr[negative],zero_arr[zero];

	fill_arr(arr,n,&positive,&negative,&zero);

//	printf("%d", positive);
//	change(arr,n,positive_arr,negative_arr,zero_arr);
	return 0;
}
