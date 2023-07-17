#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void output(int arr[], int n){
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    puts("");
}

void fill_arr(int arr[], int n){
    for(int i = 0; i < n; i++) arr[i] = rand() % 15 - 5;
    output(arr,n);
}

void find_arr(int arr[], int n){
    int  max = arr[0],min = arr[0],max_i = 0,min_i = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
			max = arr[i];
			max_i = i;
		}
        else if(arr[i] < min){
			min = arr[i];
			min_i = i;
		}
    }
	if(max_i < min_i) printf("max mindan oldin kelyapti");
    else if(min_i < max_i) printf("min maxdan oldin kelyapti");
}

int main()
{
	srand(time(0));
    int n;
    scanf("%d", &n);
    int arr[n];

    fill_arr(arr,n);
    find_arr(arr,n);

    return 0;
}
