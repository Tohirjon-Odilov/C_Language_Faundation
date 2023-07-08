#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));

	int n;
	printf("Array uzunligini kiriting: ");
	scanf("%d", &n);
	int arr[n];

	for(int i = 0; i < n; i++){
		arr[i] = rand() % 100;
	}

	int max = arr[0], min = arr[0];
	int count = 0;

	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	puts("");

	for(int i = 0; i < n; i++){
		if(max < arr[i])
			max = arr[i];
		if(min > arr[i])
			min = arr[i];
	}

	int max_n = 1, min_n = 1;
	int res = 0;

	for(int i = 0; i < n; i++){
		if(arr[i] == max){
			break;
		}
		else	max_n++;
	}

	for(int i = 0; i < n; i++){
		if(arr[i] == min)
			break;
		else	min_n++;
	}

	res = min_n - max_n;

	if(res < 0)
		res *= -1;
	printf("Max va min orasida %d ta son bor.", --res);

	return 0;
}
