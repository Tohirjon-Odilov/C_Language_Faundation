#include <stdio.h>

int main()
{
	int n=10;
	int nums[n];
	int j = 1;
	FILE *fp = fopen("l5.txt", "r");

	for(int i = n; i > 0; i--){
		fscanf(fp, "%d", &nums[i]);
	}
	while(n >= j){
		!(nums[j] % 2) && printf("%d ", nums[j]);
		j++;
	}
	return 0;
}
