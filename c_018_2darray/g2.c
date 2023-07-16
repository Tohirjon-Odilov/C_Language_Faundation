#include <stdio.h>

int main()
{
	int arr[3][4];

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			if(i % 2)
			printf("%2d ", arr[i][j]);
		}
		puts("");
	}

	return 0;
}
