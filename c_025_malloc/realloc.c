#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n;
	scanf("%d", &n);
	int *arr = malloc(n*sizeof(int));
	if(arr == NULL){
		printf("Error\n");
		exit(0);
	}
	for(int i = 0; i < n; i++){
		arr[i] = rand()%10;
		printf("%d ", arr[i]);
	}
	puts("");
	int m;
	scanf("%d", &m);
	arr = realloc(arr, n-m);
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}


	return 0;
}
