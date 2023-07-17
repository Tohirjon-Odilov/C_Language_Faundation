#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int q = 3,u = 4;
	int arr[q][u];

	for(int i = 0; i < q; i++){
		for(int j = 0; j < u; j++){
			arr[i][j] = rand() % 100;
			printf("%2d ", arr[i][j]);
		}
		puts("   ");
	}
	puts("Change:");
	for(int i = 0; i < u; i++)
		printf("%2d ", arr[0][i]);

	return 0;
}
