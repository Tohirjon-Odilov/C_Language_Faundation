#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void output(int arr[], int n){
	for(int i = 0; i < n; i++) printf("%d ", arr[i]);
	puts("");
}

void fill_arr(int arr[], int n){
	for(int i = 0; i < n; i++) arr[i] = rand() % 100 - 50;
	output(arr,n);
}

void find_arr(int arr[], int n){
	int  mn = 0,mb = 0,od = 0,ev = 0;
	for(int i = 0; i < n; i++){
		if(!(arr[i] % 2)) ev++;
		else if(arr[i] % 2) od++;
		if(arr[i] > 0) mb++;
		else if(arr[i] < 0) mn++;
	}
	printf("Manfiy %dta, musbat %dta, toq %dta, jusft %dta", mn,mb,od,ev);
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];

	fill_arr(arr,n);
	find_arr(arr,n);

	return 0;
}
