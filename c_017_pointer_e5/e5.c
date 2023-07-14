#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void output(int arr[], int n);

void fill_arr(int arr[], int n){
	for(int i = 0; i < n; i++) arr[i] = rand()%10;
	output(arr,n);
}

void output(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	puts("");
}

void summa(int arr[], int n, int *sum){
	*sum = 0;
	for(int i = 0; i < n; i++){
		*sum += arr[i];
	}
}

int main(){
	srand(time(0));
	int n,sum;
	scanf("%d", &n);
	int arr[n];

	fill_arr(arr,n);
	summa(arr,n,&sum);
	printf("%d", sum);

    return 0;
}
