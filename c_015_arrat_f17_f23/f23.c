#include <stdio.h>

int array_size(int n){
	int count = 0;
	while(n > 0){
		n/=10;
		count++;
	}
	return count;
}

int array_seperate(int n, int arr_length, int arr[]){
	for(int i = n; i > 0; i/=10){
		arr[arr_length] = i % 10;
		for(int j = arr_length; j > 0; j--)
			arr[arr_length] = arr[arr_length] * 10;
		arr_length++;
	}
	return arr_length;
}

int array_sort(int arr_length, int arr[]){
	int a;
	for(int i = 0; i < arr_length; i++)
		for(int j = 0; j < arr_length; j++)
			if(arr[i] > arr[j]){
				a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
}

int main()
{
	int n;
	scanf("%d", &n);

	int arr[array_size(n)];
	int arr_length = array_seperate(n, arr_length, arr);
	array_sort(arr_length,arr);

	for(int i = 0; i < arr_length; i++)
		printf("%d ", arr[i]);

	return 0;
}
