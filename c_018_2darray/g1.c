#include <stdio.h>

int main()
{
	int sum = 0;
	int arr[4][4];

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			scanf("%d", &arr[i][j]);
			sum += arr[i][j];
		}
	}
	printf("%d", sum);
	return 0;
}
