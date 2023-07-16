#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n], reverse_arr[n];
	int a = 0, b = 0;

	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}

	for(int i = 0, h = 1; i < n; i++, h++){
		reverse_arr[i] = arr[n-h];
	}

	for(int i = 0; i < n; i++){
		if(arr[i] != reverse_arr[i]){
			printf("KUKU");
			return 0;
		}
	}
	printf("URA");
	return 0;
}
