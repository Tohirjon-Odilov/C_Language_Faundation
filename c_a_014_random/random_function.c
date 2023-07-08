#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomjon(int a, int b){
	return a + rand() % (b - a + 1);
}

int main()
{
	srand(time(0));

	int n;
	scanf("%d", &n);
	int arr[n];

	for(int i = 0; i < n; i++){
		arr[i] = randomjon(0, 10);
		printf("%d ", arr[i]);
	}
	puts("");
	int res = 0;
	for(int i = 0; i < n; i++){
		res += arr[i];
	}

	printf("%.2f", (float)res/n);


	return 0;
}
