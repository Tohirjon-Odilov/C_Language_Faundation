#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, index, min_i = 0;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	int min = abs(index - arr[0]);
	scanf("%d", &index);

	for(int i = 1; i < n; i++){
		int farq = abs(index - arr[i]);
		if(min > abs(index - arr[i])){
			min = abs(index - arr[i]);
			min_i = i;
		}
		else if(min == farq){
			if (arr[min_i] > arr[i]){
				min = farq;
				min_i = i;
			}
		}
	}
	printf("%d", arr[min_i]);
	return 0;
}
