#include <stdio.h>

int array_size(int n){
	int count = 0;
	while(n > 0){
		n/=10;
		count++;
	}
	return count;
}

void array_seperate(int n,int count,int arr[]){
	int room = 1;
	for(int i = 0; i < count-1; i++) room*=10;

	for(int i = 0; room > 0; n %= room, room/=10, i++)
		arr[i] = n / room * room;
}

void output(int n, int arr[], int size){
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	puts("");
}

int main()
{
	int n;
	scanf("%d", &n);

	int size = array_size(n);
	int arr[size];

	array_seperate(n,size,arr);
	output(n,arr,size);
	return 0;
}
