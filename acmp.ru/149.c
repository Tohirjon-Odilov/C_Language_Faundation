#include <stdio.h>
#include <stdlib.h>

void reverse_num(int *arr, int n){
    printf("%d ", arr[n-1]);
	if(n > 1){
        reverse_num(arr, n-1);
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	reverse_num(arr,n);

	return 0;
}
