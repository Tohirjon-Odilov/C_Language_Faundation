#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int arr[7][4];

	for(int i = 0; i < 7; i++){
		for(int j = 0; j < 4; j++){
			arr[i][j] = rand() % 100;
			printf("%2d ", arr[i][j]);
		}
		puts("   ");
	}

	for(int i = 0; i < 7; i++){
//		for(int j = 0; j < 4 && !(j % 2); j++){
		for(int j = 0; j < 4; j++){
			if(!(j % 2))
			printf("%2d ", arr[i][j]);
			else printf("   ");
		}
		puts("");
	}

	return 0;
}
