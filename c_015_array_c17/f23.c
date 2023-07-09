#include <stdio.h>

int main()
{
	int n,a;
	scanf("%d", &n);
	int count = 0, arr_length = 0;;

	for(int i = n; i > 0; i/=10){
		count++;
	}

	int arr[count];

	for(int i = n; i > 0; i/=10){
		arr[arr_length] = i % 10;
		for(int j = arr_length; j > 0; j--){
			arr[arr_length] = arr[arr_length] * 10;
		}
		arr_length++;
	}

	for(int i = 0; i < arr_length; i++){
		for(int j = 0; j < arr_length; j++){
			if(arr[i] > arr[j]){
				a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
		}
	}

	for(int i = 0; i < arr_length; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}
